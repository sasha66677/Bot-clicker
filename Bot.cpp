#include <windows.h>

#define X (DWORD)50
#define Y (DWORD)50

int main(int argc, char** argv) {
	Sleep(10000);
	for (int i = 0; i <= 100; ++i) {
		mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
		Sleep(200);
		mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
		Sleep(200);
	}
	return (EXIT_SUCCESS);
}