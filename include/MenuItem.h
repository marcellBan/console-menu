#ifndef CONSOLE_MENU_MENUITEM_H
#define CONSOLE_MENU_MENUITEM_H

#include <string>

namespace ConsoleMenu {
    class MenuItem {
    public:
        explicit MenuItem(std::string text);
        virtual void doAction()=0;
    private:
        std::string text;
    };
}

#endif //CONSOLE_MENU_MENUITEM_H
