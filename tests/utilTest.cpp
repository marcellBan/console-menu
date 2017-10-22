#include <iostream>
#include <library.h>

using namespace ConsoleMenu;

int main() {
    ConsoleUtils::setBackgroundColor(ConsoleUtils::WHITE);
    ConsoleUtils::setTextColor(ConsoleUtils::BLACK);
    std::cout << "HELLO" << std::endl;
    ConsoleUtils::clearFormatting();
    std::cout << "NORMAL" << std::endl;
    getchar();
    ConsoleUtils::clearConsole();
    return 0;
}