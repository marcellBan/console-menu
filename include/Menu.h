#ifndef CONSOLE_MENU_MENU_H
#define CONSOLE_MENU_MENU_H

#include "MenuItem.h"

#include <string>
#include <memory>

namespace ConsoleMenu {
    class Menu {
    public:
        explicit Menu(size_t itemCount = 2);
        void addMenuItem(std::shared_ptr<MenuItem>& menuItem);
        void display();
    private:
        std::unique_ptr<std::weak_ptr<MenuItem>[]> menuItems;
        size_t itemCount, index;
    };
}
#endif //CONSOLE_MENU_MENU_H
