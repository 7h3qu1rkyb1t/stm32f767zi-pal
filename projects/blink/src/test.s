.thumb
.global call
.syntax unified


call:
    push {lr}
    push {r4}
branch:
    beq bl
    nop
bl:
    nop
    bl bx
    nop
bx:
    nop
    adr r4, blx
    orr r4,1
    bx r4
    nop
blx:
    adr r4, branch
    orr r4,1
    blx r4
    pop {r4}
    pop {pc}
