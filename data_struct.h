#include<string>
#include<array>
#include<vector>

using namespace std;

//enum UserType {STANDARD, PREMIUM, PRIVILEDGED}; //Not Type safe
enum class UserType {STANDARD, PREMIUM, PRIVILEDGED};

struct UserMain
{
    string Name;
    int uniq_id;
    float points;
    int num_of_purchases;
    struct Purchase {
        string date;
        int amount;
    };
};

class Users{
    public:
        Users();
        void setName(const string& name);
        const string& getName();
        void setId(const int id);
        const int getId();
        void incPurchases();

    private:   
        string uName;
        int uniq_id;
        int num_of_purchases;
};

class UserData
{
    public:
        UserData();
        void create_user(const string& userName, const int& id);
        void display_user(const int& usr_id);
        void puchaseMade(const int& id);
        int getTotalUsers();
        bool searchUser(const int id);
    
    private:
        vector<Users> TotalUsers;
};


