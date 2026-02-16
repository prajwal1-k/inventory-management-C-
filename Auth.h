#ifndef AUTH_H
#define AUTH_H

#include "User.h"
#include <vector>

class Auth{
    private:
        vector<User> users;

    public:
        Auth();
        User * login();
};

#endif