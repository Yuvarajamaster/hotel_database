#include<string>
#include<array>

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

