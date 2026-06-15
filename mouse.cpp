#include <windows.h>

extern "C" __declspec(dllexport) bool mouse_open() {
    return true;
}
