#include "ConsoleUtils.h"

#include <iostream>

using namespace std;
using namespace ConsoleMenu::ConsoleUtils;

void clearConsole() {
    cout << ESC << CSI << "2J";
    cout << ESC << CSI << "1;1H";
}

void gotoXY(size_t x, size_t y) {
    cout << ESC << CSI << y << ";" << x << "H";
}

void clearFormatting() {
    cout << ESC << CSI << "0m";
}

void setTextColor(Color c) {
    cout << ESC << CSI << "38;5;" << c << "m";
}

void setBackgroundColor(Color c) {
    cout << ESC << CSI << "48;5;" << c << "m";
}
