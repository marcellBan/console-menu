#ifndef CONSOLE_MENU_CONSOLEUTILS_H
#define CONSOLE_MENU_CONSOLEUTILS_H

#include <cstddef>

namespace ConsoleMenu {
    namespace ConsoleUtils {
        const char ESC = '\x1b';
        const char CSI = '[';
        enum Color {
            BLACK = 0, DARKGREY = 8,
            MAROON = 1, RED = 9,
            DARKGREEN = 2, GREEN = 10,
            GOLD = 3, YELLOW = 11,
            DARKBLUE = 4, BLUE = 12,
            PURPLE = 5, MAGENTA = 13,
            TEAL = 6, CYAN = 14,
            LIGHTGREY = 7, WHITE = 15
        };
        void clearConsole();
        void gotoXY(size_t x, size_t y);
        void clearFormatting();
        void setTextColor(Color c);
        void setBackgroundColor(Color c);
    };
}
#endif //CONSOLE_MENU_CONSOLEUTILS_H
