#include "Menu.h"
#include "MenuExceptions.hpp"

using namespace ConsoleMenu;

Menu::Menu(size_t itemCount)
        : itemCount(itemCount),
          index(0),
          menuItems(new std::weak_ptr<MenuItem>[itemCount]) {}

void Menu::addMenuItem(std::shared_ptr<MenuItem>& menuItem) {
    if (index < itemCount) {
        menuItems[index++] = std::weak_ptr<MenuItem>(menuItem);
    } else {
        throw MenuFullException();
    }
}

void Menu::display() {

    // TODO: implement this
}
