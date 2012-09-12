MEMORY
{
	FLASH (rx) : ORIGIN = 0x00400000, LENGTH = 256k
	SRAM (rwx) : ORIGIN = 0x20000000, LENGTH = 48k
}

SEARCH_DIR (libsam3s)
GROUP(libsam3s.a)
ENTRY(Reset_Handler)

SECTIONS
{
	_end_stack = ORIGIN(SRAM) + LENGTH(SRAM);
	.text :
	{
		* (.vectors)
        * (.init)
        * (.fini)
		* (.text)
		* (.eh_frame)
		_end_text = .;
	} > FLASH

	.data :
	{
		_start_data = .;
		* (.data)
		_end_data = .;
	} > SRAM AT > FLASH

	.bss :
	{
        _start_bss = .;
		* (.bss)
        _end_bss = .;
	} > SRAM

	.rodata :
	{
		* (.rodata)
		* (.rodata*)
	} > FLASH

}
