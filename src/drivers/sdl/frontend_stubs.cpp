#include "../../driver.h"

void FCEUD_DebugBreakpoint(int bp_num)
{
	(void)bp_num;
}

void FCEUD_UpdateNTView(int scanline, bool drawall)
{
	(void)scanline;
	(void)drawall;
}

void FCEUD_UpdatePPUView(int scanline, int drawall)
{
	(void)scanline;
	(void)drawall;
}

void FCEUI_VSUniToggleDIPView(void)
{
}
