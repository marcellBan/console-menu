#ifndef CONSOLE_MENU_MENUEXCEPTIONS_HPP
#define CONSOLE_MENU_MENUEXCEPTIONS_HPP

#include <exception>

namespace ConsoleMenu {
    class MenuFullException : public std::exception {
    public:
        const char* what() const noexcept override {
            return "Menu is full. Can't add more items.";
        }
    };
}

#endif //CONSOLE_MENU_MENUEXCEPTIONS_HPP
