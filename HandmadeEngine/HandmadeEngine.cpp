#include <Windows.h>

void foo(void)
{
	OutputDebugStringA("This is the first thing we have actually printed.\n");
}

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{

	unsigned int Test = 2 * 1000 * 1000 * 1000;

	foo();
}