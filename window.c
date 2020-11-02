#include<windows.h>
int_stdcall WinMain(HINSTANCE hinstanve,HINSTANCE hPrevinstance,
	LPSTR lpszCmdShow);
{
	HWND h;
	h=CreateWindow("BUTTON","Hit Me",
		WS_OVERLAPPEDWINDOW,10,10,150,100,0,0,i,0);
	ShowWindow(h,nCmdShow);
	MessageBox(0,"Hi","Waiting",MB_OK);
	return 0;
}