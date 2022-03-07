
#include <stdio.h>
#include <Windows.h>

 WINAPI function2(LPVOID doiSo)
{
	while (1)
	{
		printf("Xin chao \r\n");
		Sleep(1100);
	}
}
void main()
{
	DWORD ID = 0;
	CreateThread(NULL, 128, function2, NULL, 0,&ID);
	while (1)
	{
		printf("Say hello\r\n");
		Sleep(1000);
	}
}