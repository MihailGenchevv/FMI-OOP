//
// Created by MGenchev on 26.03.24.
//

#ifndef FMI_OOP_USERINFO_H
#define FMI_OOP_USERINFO_H

#include <iostream>
#include <cstring>
using namespace std;

class UserInfo {
private:
    int age;
    char username[250];
    char password[250];
public:
    UserInfo(char pass[]="defaultPassword", char username[]="defaultUsername", int age=7) {
        strncpy(this->password, pass, 250);
        strncpy(this->username, username, 250);
        this->age= age;
    }

    UserInfo(const UserInfo& copyUser){
        strncpy(this->password, copyUser.password, 250);
        strncpy(this->username, copyUser.username, 250);
        this->age= copyUser.age;
    }


    void print(){
        cout<<password << " " << username << " "<< age << endl;
    }
};


#endif //FMI_OOP_USERINFO_H
