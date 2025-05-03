#include<iostream>
#include<string>
#include<array>
#include "utils.h"

using namespace std;

//auto dispMenu(array<string,4> a) -> void
void dispMenu(array<string,4> a)
{
    int i=1;
    for ( string dp:a )
    {
        cout<<i<<"."<<dp<<endl;
        i++;
    }
}
