#include<iostream>
#include<string>
#include<array>
#include "utils.h"

using namespace std;

//auto dispMenu(array<string,4> a) -> void
void dispMenu( const array<string,4> a)
{
    int i=1;
    cout << "\n";
    for ( string dp:a )
    {
        cout<<i<<"."<<dp<<endl;
        i++;
    }
}

void dispUser(UserData& usrDB)
{
    if(usrDB.getTotalUsers() == 0)
    {
        cout << "No Users present.\n";
    }
    else
    {
        int usrId;
        cout << "Enter User ID:";
        cin >> usrId;
        usrDB.display_user(usrId);
    }
  
}

void addUser(UserData& usrDB)
{
    int usrID;
    string name;
    cout << "Enter User ID:";
    cin >> usrID;
    if(usrDB.searchUser(usrID))
        cout << "User Already present.\n";
    else{
        cout << "Enter User Name:";
        getline(cin >> ws,name);
        cout << "Entered Name:" << name;
        usrDB.create_user(name,usrID);
    }
}