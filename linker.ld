ENTRY(Reset_handler)

MEMORY{
    FLASH : ORIGIN = 0x8000000, LENGTH = 2M
    SRAM1 : ORIGIN = 0x20020000, LENGTH = 368K
    SRAM2 : ORIGIN = 0x2007C000, LENGTH = 16K
    DTCM  : ORIGIN = 0x20000000, LENGTH = 128K
}

SECTIONS{
    .text : {
        *(iv_table)
        *(.text)
        *(.rodata)
    } > FLASH

    .data : {
        *(.data)
    } > SRAM1 AT> FLASH

    .bss :{
        *(.bss)
    } > SRAM1 AT> FLASH
}
