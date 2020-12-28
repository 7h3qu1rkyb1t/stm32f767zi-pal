/* ==============================assumptions=============================
* using GPIOG port and pins 10,11,12,13 as 4 data pins for lcd
* GPIOG is chosen due to it is easy to intarface and easy for driver
*/
.thumb
.syntax unified
.global setup
.global run

// =============================== constants =============================== 
.equ GPIOG,         0x40021800
.equ GPIO_ODR,      0x14                // offset
.equ GPIO_IDR,      0x10                // offset
.equ GPIO_BSRR,     0x18                // offset
.equ GPIO_MODER,    0                   // offset
.equ GPIO_IDR,      0x10                // offset
.equ Register_sel,  0                   // pin number
.equ r_w,           9                   // pin number
.equ enable,        15                  // pin number
.equ DATA_PINS,     ( 1<<20 | 1<< 22 | 1<<26 | 1<<24 )       // pins with offset according to moder

// ============================= macros ====================================
.macro delay
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
    nop
.endm

.macro pulse_on
    ldr r3, =GPIOG
    mov r2, 2
    str r2, [r3, GPIO_BSRR]
.endm

.macro pulse_off
    ldr r3, =GPIOG
    mov r2, 0
    movt r2, 2
    str r2, [r3, GPIO_BSRR]
.endm

.macro clear_pins
    ldr r3, =GPIOG
    mov r2, 0
    movt r2, 0xffff
    str r2,  [r3, GPIO_BSRR]
.endm

.macro set_mode_write
    ldr r0, =GPIOG
    // set all data pins to input mode
    ldr r1, [r0, GPIO_MODER]
    orr r1, DATA_PINS
    str r1, [r0, GPIO_MODER]
    // set r_w pin to low
    mov r1, 0
    movt r1, (1<<r_w)
    str r1, [r0, GPIO_BSRR]
.endm

    
.macro set_mode_read
    ldr r0, =GPIOG
    // set all data pins as input 
    ldr r1, [r0, GPIO_MODER]
    bic r1, DATA_PINS                   // clear all bits of data pins
    str r1, [r0, GPIO_MODER]
    // set r_w pin to high
    mov r1, (1<<r_w)
    str r1, [r0, GPIO_BSRR]
.endm

/*
* data pins are G10 G11 G12 G13.
* it is choosen so that these pins are adjecent to each other and continues.
* so writing to these pins are easy, and fast
*/
.equ DATA_OFFSET,   10                  

setup:
    push {r7, lr}
    mov r7, sp                     // use r7 as base register
    set_mode_write

//    bkpt 1

    mov r0, (0b10 << DATA_OFFSET)                // set mode as 4 bit data transfer mode
    ldr r3, =GPIOG
    str r0, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    delay
    clear_pins

//    bkpt 1

    mov sp, r7
    pop {r7, pc}

run:
    mov r0, 0b101000                    // set 2 line display
    bl write_command
    mov r0, 0b1                         // clear display
    bl write_command
    mov r0, 0b10                        // return to home
    bl write_command
    mov r0, 0xe                         // enable display, cursor, blinking
    bl write_command
    mov r0, 0x42
    bl write_data
    mov r0, 0x43
    bl write_data
    mov r0, 0x45
    bl write_data
loop:
    b loop

/*
* this wont work if pins are scattered across port
* pins needs to be contineous
*/
// void write_command(unsigned int data);
write_command:
    push {r7, lr}
    mov r7, sp                     // use r7 as base register
    push {r0}
    bl wait_busy                    // wait till busy flag is cleared
    set_mode_write
    ldr r0, [r7, -0x4]
    mov r1, (1<<10 | 1<<11 | 1<<12| 1<< 13)     // only gpio pin bits should be present
    and r2, r1, r0, lsl (DATA_OFFSET - 4)       // write upper 4 bits
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    delay
    clear_pins
    
    // write lower 4 bits
    and r2, r1, r0, lsl DATA_OFFSET
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    delay
    clear_pins
    mov sp, r7
    pop {r7, pc}

write_data:
    push {r7, lr}
    mov r7, sp                     // use r7 as base register
    push {r0}
    bl wait_busy                    // wait till busy flag is cleared
    set_mode_write
    ldr r0, [r7, -0x4]
    mov r1, 0xffff
    and r2, r1, r0, lsl (DATA_OFFSET - 4)       // write upper 4 bits
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable | 1 << Register_sel)
    str r2, [r3, GPIO_BSRR]
    delay
    clear_pins
    
    // write lower 4 bits
    and r2, r1, r0, lsl DATA_OFFSET
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable | 1 << Register_sel)
    str r2, [r3, GPIO_BSRR]
    delay
    clear_pins
    // check for busy state 
    mov sp, r7
    pop {r7, pc}

// uint8_t read_command(void);
read_command:
    push {r7, lr}
    mov r7, sp

    pulse_on
//    bkpt 2

    ldr r0, =GPIOG
    set_mode_read
    // set and reset enable  pin
    mov r1, (1<< enable)
    str r1, [r0, GPIO_BSRR]
    delay
    // read to data
    ldr r2, [r0, GPIO_IDR]
    // reset enable pin
    lsl r1, 16
    str r1, [r0, GPIO_BSRR]

    mov r3, r2, lsr DATA_OFFSET - 4             //
    and r3, 0xf0
    delay                           // delay between reads
    // set enable pin
    mov r1, (1 << enable)
    str r1, [r0, GPIO_BSRR]
    delay
    ldr r2, [r0, GPIO_IDR]
    lsl r1, 16                          // reset enable pin
    str r1, [r0, GPIO_BSRR]

    lsr r2, DATA_OFFSET
    and r2, 0xf                         // keep only lower 4 bits
    orr r3, r2                          // insert to lower 4 bits
    // reset enable pin

    mov r0, r3                          // insert data to r0

    pulse_off
//    bkpt 2

    mov sp, r7
    pop {r7, pc}

wait_busy:
    push {r7, lr}
    mov r7, sp
is_busy:
    bl read_command
    ands r0, 0x80                           // check for busy flag
    bne  is_busy

    pop {r7, pc}
