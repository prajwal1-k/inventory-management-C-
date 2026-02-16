#include<iostream>
#include<fstream>
#include "Inventory.h"

using namespace std;

void Inventory::loadFromFile(){
    ifstream file("inventory.txt");

    if(!file) return;

    items.clear();

    while(!file.eof()){
        Item item;
        string temp;

        if(!getline(file, temp)) break;
        item.id = stoi(temp);

        getline(file, item.name, '|');

        getline(file, temp, '|');
        item.quantity = stoi(temp);

        getline(file, temp);
        item.price = stof(temp);

        items .push_back(item);


    }

    file.close();
}

void Inventory::saveToFile() const{
    ofstream file("inventory.txt");

    for(auto &item : items){
        file << item.id << endl;
        file << item.name << "|" << item.quantity << "|" << item.price << endl;
    }

    file.close();

}

void Inventory::addItem(){
    Item item;

    item.input();
    items.push_back(item);
    saveToFile();
    cout<<"Item added successfully!"<<endl;
}


void Inventory::viewItems() {
    if (items.empty()) {
        cout << "No Items Found\n";
        return;
    }

    for (auto &item : items) {
        item.display();
    }
}

void Inventory::deleteItem() {
    int id;
    cout << "Enter Item Id to delete: ";
    cin >> id;

    for(auto it = items.begin(); it != items.end(); it++) {
        if(it->id == id) {
             items.erase(it);
             saveToFile();
             cout << "Item deleted successfully!" << endl;
             return;
        }
    }
    cout<<"Item not found!"<<endl;
}