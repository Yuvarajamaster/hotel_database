#include<iostream>
#include<string>
#include<array>

#include "globals.h"
#include "utils.h"


using namespace std;

int main()
{
    UserData user_database;
    UserData* db_ptr = &user_database;
    cout << "User DataBase created!\n";
    cout << "Welcome!"<<endl;
    int option = 4;
    bool status = true;
    while(status)
    {
        dispMenu(menu);
        cout << "Enter your option: \n";
        cin >> option;
        switch(option)
        {
            case 1:
                cout << "Displaying User Info\n";
                dispUser(*db_ptr);
                break;
            case 2:
                cout << "Adding New User\n";
                addUser(*db_ptr);
                break;
            case 3:
                cout << "Option 3\n";
                break;
            case 4:
                cout << "Exit!!";
                status = false;
                break;
        }
    }

    return 0;
}