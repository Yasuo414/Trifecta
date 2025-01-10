#include "trifecta.h"

int main() {
    Trifecta tf;
    std::cout << "INFO:Trifecta || Trifecta is running in background!" << std::endl;
    std::cout << "INFO:Trifecta || Clicking once turns Trifecta into 3." << std::endl;

    bool is_left_button_down = false;

    while (true) {
        SHORT key_state = GetAsyncKeyState(VK_LBUTTON);

        if (key_state & 0x8000) {
            if (!is_left_button_down) {
                is_left_button_down = true;
                tf.click();
            }
        } else {
            is_left_button_down = false;
        }

        Sleep(10);
    }

    return 0;
}