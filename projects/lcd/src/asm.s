/* ==============================assumptions=============================
* using GPIOG port and pins 10,11,12,13 as 4 data pins for lcd
* GPIOG is chosen due to it is easy to intarface and easy for driver
*/
.thumb
.syntax unified
.global setup
.global run

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

/*
* data pins are G10 G11 G12 G13.
* it is choosen so that these pins are adjecent to each other and continues.
* so writing to these pins are easy, and fast
*/
.equ DATA_OFFSET,   10                  

setup:
    push {lr}
    mov r12, sp                     // use r12 as base register
    bl set_mode_write
    mov r0, 0b10                // set mode as 4 bit data transfer mode
    ldr r3, =GPIOG
    str r0, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    // nop keep enable pin for minimum duration
    nop
    nop
    ldr r2, =(1 << (enable+16))         // clear is above 16 bits so ldr is needed
    str r2, [r3, GPIO_BSRR]
    mov sp, r12
    pop {pc}

run:
    mov r0, 0b101000                    // set 2 line display
    bl write_command
    mov r0, 0b1                         // clear display
    bl write_command
    mov r0, 0b10                        // return to home
    bl write_command
    mov r0, 0xe                         // enable display, cursor, blinking
    bl write_command
    mov r0, 0x41
    bl write_data
loop:
    b loop

set_mode_write:
    ldr r0, =GPIOG
    ldr r1, [r0, GPIO_MODER]
    orr r1, DATA_PINS
    str r1, [r0, GPIO_MODER]
    bx lr

    
set_mode_read:
    ldr r0, =GPIOG
    ldr r1, [r0, GPIO_MODER]
    bic r1, DATA_PINS                   // clear all bits of data pins
    str r1, [r0, GPIO_MODER]
    bx lr

/*
* this wont work if pins are scattered across port
* pins needs to be contineous
*/
// void write_command(unsigned int data);
write_command:
    push {lr}
    mov r12, sp                     // use r12 as base register
    push {r0}
    bl wait_busy                    // wait till busy flag is cleared
    bl set_mode_write
    ldr r0, [r12, 0x4]
    mov r1, 0xffff
    and r2, r1, r0, lsl (DATA_OFFSET - 4)       // write upper 4 bits
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    // nop keep enable pin for minimum duration
    nop
    nop
    ldr r2, =(1 << (enable+16))         // clear is above 16 bits so ldr is needed
    str r2, [r3, GPIO_BSRR]
    
    // write lower 4 bits
    and r2, r1, r1, lsl DATA_OFFSET
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable)
    str r2, [r3, GPIO_BSRR]
    // nop keep enable pin for minimum duration
    nop
    nop
    ldr r2, =(1 << (enable+16))         // clear is above 16 bits so ldr is needed
    str r2, [r3, GPIO_BSRR]


    // check for busy state 
    mov sp, r12
    pop {pc}

write_data:
    push {lr}
    mov r12, sp                     // use r12 as base register
    push {r0}
    bl wait_busy                    // wait till busy flag is cleared
    bl set_mode_write
    ldr r0, [r12, 0x4]
    mov r1, 0xffff
    and r2, r1, r0, lsl (DATA_OFFSET - 4)       // write upper 4 bits
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable | 1 << Register_sel)
    str r2, [r3, GPIO_BSRR]
    // nop keep enable pin for minimum duration
    nop
    nop
    ldr r2, =( 1 << (Register_sel+16) |1 << (enable+16))         // clear is above 16 bits so ldr is needed
    str r2, [r3, GPIO_BSRR]
    
    // write lower 4 bits
    and r2, r1, r1, lsl DATA_OFFSET
    ldr r3, =GPIOG
    str r2, [r3, GPIO_BSRR]              // set data pins with upper 4 bits
    // set enable pin
    mov r2, ( 1 << enable | 1 << Register_sel)
    str r2, [r3, GPIO_BSRR]
    // nop keep enable pin for minimum duration
    nop
    nop
    ldr r2, =( 1 << (Register_sel+16) |1 << (enable+16))         // clear is above 16 bits so ldr is needed
    str r2, [r3, GPIO_BSRR]


    // check for busy state 
    mov sp, r12
    pop {pc}

// uint8_t read_command(void);
read_command:
    push {lr}
    mov r12, sp

    ldr r0, =GPIOG
    bl set_mode_read
    mov r1, (1 << r_w)
    str r1, [r0, GPIO_BSRR]
    nop                                 // small delay till pin becomes active
    ldr r2, [r0, GPIO_IDR]
    mov r3, r2, lsr (DATA_OFFSET - 4)
    lsl r1, 16
    str r1, [r0, GPIO_BSRR]
    nop
    nop
    mov r1, (1 << r_w)
    str r1, [r0, GPIO_BSRR]
    nop                                 // small delay till pin becomes active
    ldr r2, [r0, GPIO_IDR]
    lsr r2, DATA_OFFSET
    and r2, 0xf                         // keep only lower 4 bits
    orr r3, r2                          // insert to lower 4 bits
    lsl r1, 16
    str r1, [r0, GPIO_BSRR]

    mov r0, r3                          // insert data to r0

    mov sp, r12
    pop {pc}

wait_busy:
    push {lr}
    mov r12, sp

is_busy:
    bl read_command
    and r0, 8                           // check for busy flag
    beq is_busy

    mov sp, r12
    pop {pc}
