#include <windows.h>


extern "C" __declspec(dllexport) bool mouse_open() {
    return true; 
}

extern "C" __declspec(dllexport) void mouse_move(int dx, int dy) {
    INPUT input = { 0 };
    input.type = INPUT_MOUSE;
    input.mi.dx = dx;
    input.mi.dy = dy;
    input.mi.dwFlags = MOUSEEVENTF_MOVE; 
    input.mi.time = 0;
    input.mi.dwExtraInfo = 0; // 

    SendInput(1, &input, sizeof(INPUT));
}

extern "C" __declspec(dllexport) void mouse_close() {
   
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) {
    return TRUE;
}
