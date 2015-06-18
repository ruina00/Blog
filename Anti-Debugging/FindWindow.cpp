#include <windows.h>
#include <stdio.h>
 
BOOL anti_debug()
{
	BOOL result = FALSE;
	if(FindWindow("OLLYDBG", 0) || FindWindow("WinDbgFrameClass", 0))
		result = TRUE;
	return result;
}
 
int main(int argc, char **argv)
{
	if(anti_debug())
		printf("Debugger Detected\n");
	else
		printf("No Debugger...\n");
	return 0;
}
