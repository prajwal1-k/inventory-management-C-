#ifndef INVENTORY_H
#define INVENTORY_H

#include "Item.h"
#include <vector>


class Inventory{
    private:
        vector<Item> items;

    public:
        void loadFromFile();
        void saveToFile() const;

        void addItem();
        void deleteItem();
        void viewItems();
};

#endif