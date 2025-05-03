#include<iostream>
#include "data_struct.h"

using namespace std;

Users::Users() : uName(""),uniq_id(0),num_of_purchases(0)
{}

const string& Users::getName(){ return uName; }
 
void Users::setName(const string& name){ uName = name; }

const int Users::getId(){ return uniq_id; }

void Users::setId(const int id){ uniq_id = id; }

void Users::incPurchases(){ num_of_purchases++; }

UserData::UserData(){};

void UserData::create_user(const string& name, const int& id)
{
    Users newUser;
    newUser.setName(name);
    newUser.setId(id);
    TotalUsers.push_back(newUser);
    cout << "User Created!\n";
};

void UserData::display_user(const int& id)
{
    for (auto& usr:TotalUsers)
    {
        if(usr.getId() == id)
        {
            cout << "User found!";
            cout << "UserName: "<< usr.getName() << "\n";
            return;
        }
    }
    cout << "No User found.";
    return;

};

void UserData::puchaseMade(const int& id)
{
    for (auto& usr:TotalUsers)
    {
        if(usr.getId() == id)
        {
            usr.incPurchases();
            cout << "Purchase count added!"<<"\n";
        }
    }
}

int UserData::getTotalUsers()
{
    return TotalUsers.size();
}

bool UserData::searchUser(const int id)
{

    for (auto& usr:TotalUsers)
    {
        if(usr.getId() == id)
            return 1;
    }
    return 0;
}

