.thumb
.syntax unified
.align 2
.global call
.global delay

// variables

.equ SYSTICK,       0xE000E010
.equ GPIOB,         0x40020400
.equ RNG,           0x50060800
.equ RNG_DATA,      (RNG+0xc)       // data is at offset 0x8
.equ RNG_STATUS,    (RNG+0x4)
.equ DELAY_CYCLES,  100000

call:
    ldr r3, =RNG
    push {r3}
    push {r3}
    mov r3, 38
    ldr r3, [sp]
not_ready:
    ldr r4, [r3, #4]       // we care only last bit 
    ands r4, 1
    beq not_ready        // if rng is not ready then keep checking
    ldr r4, [r3, #8]       // random number
    mov r6, 3

    udiv r5, r4, r6
     /* r4 will have random number  
        r5 division result
        r6 3
     */
    mls r4, r5, r6, r4          // r4 will have modulo result

    cmp r4, 1
    beq red
    cmp r4, 2
    beq blue
    // else green
green:
    mov r4, 0x1             // 0th pos for green
    b turn_on
red:
    mov r4, (1<<14)
    b turn_on
blue:
    mov r4, (1<<7)
turn_on:
    ldr r3, =GPIOB
    str r4, [r3, 0x14]      // store that into odr, this will also clear other led's
    ldr r0, =DELAY_CYCLES
    bl delay
    pop {r3}
    pop {r3}
    b call

// delay(uint32_t value);
// max value is 2^^24 -1
delay:
    push {r4, r5}
    ldr r4, =SYSTICK
    and r5, r0, 0x00ffffff      // only 24 bits are allowed
    str r5, [r4, 0x4]           // rvr register 0x4 offset
    ldr r5, [r4, 0]
    orr r5, 1                   // enable systick
    str r5, [r4, 0]
    wfi
    pop {r4, r5}
    bx lr
