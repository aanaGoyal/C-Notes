/* ENUMS --->> */

// Collection of named integer constants meaning each element is assigned by an integer value.

// Two enums cannot share same names.

#include<iostream>
using namespace std;
enum gender{
    Male,
    Female
};
enum gender2{
    // Male,
    // Female

    male = 10,
    female = 20,
};
int main(){
    enum gender2 g1;
    g1 = male;
    cout << g1;
}