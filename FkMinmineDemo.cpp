// FkMinmineDemo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <windows.h>

int main()
{
	HWND hWinmain = FindWindow(NULL, L"扫雷");
	DWORD dwPID = 0;
	GetWindowThreadProcessId(hWinmine, &dwPID);
	HANDLE hProcess OpenProcess(PROCESS_ALL_ACCESS, false, );

	DWORD dwBaseAddr = 0x01005330;
	DWORD dwNum = 0, dwWidth = 0, dwHight = 0,dwSize = 0;
	//宽度 高度	
	ReadProcessMemory(hProcess, (LPVOID)dwBaseAddr, dwNum, sizeof(DWORD), &dwSize);
	ReadProcessMemory(hProcess, (LPVOID)(dwBaseAddr+4), dwWidth, sizeof(DWORD), &dwSize);
	ReadProcessMemory(hProcess, (LPVOID)(dwBaseAddr+8), dwHight, sizeof(DWORD), &dwSize);

		//读取内部信息
    return 0;
}

