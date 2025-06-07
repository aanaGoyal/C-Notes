/* DIFFERENCE BETWEEN CLASS AND STRUCTURE --->> */


// By default the values are private of the class whereas of struct they are public.
#include<iostream>
using namespace std;
struct structName{
    int x = 10;
};

class className{
    int y = 20;
};

int main(){
    structName s1;
    className c1;
    cout << s1.x << endl;
    // cout << c1.x << endl;
}