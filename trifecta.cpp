#include "trifecta.h"

void Trifecta::click() {
    INPUT inputs[6] = {};

    for (int i = 0; i < 3; ++i) {
        inputs[2 * i].type = INPUT_MOUSE;
        inputs[2 * i].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

        inputs[2 * i + 1].type = INPUT_MOUSE;
        inputs[2 * i + 1].mi.dwFlags = MOUSEEVENTF_LEFTUP;
    }

    SendInput(6, inputs, sizeof(INPUT));
}