#include "Auth.h"
#include <fstream>
#include <iostream>

using namespace std;

Auth::Auth(){
    users.push_back({"admin", "admin@123", "admin"});
    users.push_back({"staff", "staff@123", "manager"});

}
User * Auth::login(){
    string username, password;

    cout << "Enter Username: ";
    cin >> username;
    cout << "Enter Password: ";
    cin >> password;

    for(auto &user : users){
        if(user.username == username && user.password == password){
            return &user;
        }
    }
    return nullptr;
}