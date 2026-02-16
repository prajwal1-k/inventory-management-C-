#include<iostream>
#include<fstream>

#include "Item.h"
using namespace std;

void Item::input(){
    cout<<"Enter Item Id: ";
    cin>>id;
    cin.ignore(); // Clear the newline character from the input buffer

    cout<<"Enter Item Name: ";
    getline(cin, name);

    cout<<"Enter Quantity: ";
    cin>>quantity;

    cout<<"Enter Price: ";
    cin>>price;
}

void Item::display(){
    cout<<"Id: "<<id<< " | Name: "<<name<<" | Qty: "<<quantity<<" | Price: " << price << endl;
}