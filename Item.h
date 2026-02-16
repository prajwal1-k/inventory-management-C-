#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item{
    public:
        string name;
        float price;
        int quantity;
        int id;

        void input();
        void display();
};

#endif

