#include<Windows.h>
LRESULT CALLBACK WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_CLOSE:
		PostQuitMessage(69);
		break;
	case WM_KEYDOWN:
		if (wParam == 'F')
		{
			SetWindowTextW(hWnd, L"ß÷");
		}
	case WM_KEYUP:
		if (wParam == 'F')
		{
			SetWindowText(hWnd, L"ÌùÌù");
		}
	}
	return DefWindowProc(hWnd, msg, wParam, lParam);
}
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow)
{
	LPCWSTR class_name = L"Meow Shoot";
	WNDCLASSEXW wc = {};
	wc.cbSize = sizeof(wc);
	wc.style = CS_OWNDC;
	wc.lpfnWndProc = WndProc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hInstance = hInstance;
	wc.hIcon = NULL;
	wc.hCursor = NULL;
	wc.hbrBackground = NULL;
	wc.lpszMenuName = NULL;
	wc.lpszClassName = class_name;
	RegisterClassEx(&wc);
	HWND hWnd = CreateWindowExW(0, class_name, L"Meow Shoot", WS_CAPTION | WS_MINIMIZEBOX | WS_SYSMENU, 200, 200, 1280, 720, NULL, NULL, hInstance, NULL);
	ShowWindow(hWnd, SW_SHOW);
	MSG msg;
	BOOL gResult;
	while ((gResult = GetMessage(&msg, NULL, 0, 0)) > 0)
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	if (gResult == -1)
	{
		return -1;
	}
	else
	{
		return int(msg.wParam);
	}
	return 0;
}