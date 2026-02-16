#include <iostream>
#include "Inventory.h"
#include "Auth.h"

using namespace std;

void adminMenu(Inventory &inv) {
    int choice;

    do {
        cout << "\n===== ADMIN MENU =====\n";
        cout << "1. Add Item\n";
        cout << "2. View Items\n";
        cout << "3. Delete Item\n";
        cout << "4. Logout\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inv.addItem(); break;
            case 2: inv.viewItems(); break;
            case 3: inv.deleteItem(); break;
            case 4: cout << "Logging out...\n"; break;
            default: cout << "Invalid Choice\n";
        }

    } while (choice != 4);
}

void staffMenu(Inventory &inv) {
    int choice;

    do {
        cout << "\n===== STAFF MENU =====\n";
        cout << "1. View Items\n";
        cout << "2. Logout\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: inv.viewItems(); break;
            case 2: cout << "Logging out...\n"; break;
            default: cout << "Invalid Choice\n";
        }

    } while (choice != 2);
}

int main() {
    Inventory inventory;
    inventory.loadFromFile();

    Auth auth;

    int mainChoice;

    do {
        cout << "\n===== INVENTORY SYSTEM =====\n";
        cout << "1. Login\n";
        cout << "2. Exit\n";
        cout << "Choice: ";
        cin >> mainChoice;

        switch (mainChoice) {
            case 1: {
                User* user = auth.login();

                if (!user) {
                    cout << "Invalid Login\n";
                    break;
                }

                cout << "Login Success! Role: " << user->role << endl;

                if (user->role == "admin")
                    adminMenu(inventory);
                else
                    staffMenu(inventory);

                break;
            }

            case 2:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid Choice\n";
        }

    } while (mainChoice != 2);

    return 0;
}
