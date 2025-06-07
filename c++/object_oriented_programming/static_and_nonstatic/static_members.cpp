#include<iostream>
using namespace std;
/* STATIC MEMBERS --->> */
// These are the class methods.
// They are shared across all the objects of the class.
// It must de defined outside the class.
// Initialised only once and it takes the space in memory only once and its value remains same throughout the program.
// Can be accessed using class name and there is no need to create the object for it.


class A{
    public:
    // Here we can only declare it and not initialise it.
    static int count ;
    int value;
    A(){
        count++;
    }
}; 
// Initialising the static variable.
// By default the value of all the static variables is 0.
// :: --->> SCOPE RESOLUTION OPERATOR for declaring it or calling it outside class.
int A::count = 50;
int main(){
    A a1, a2, a3, a4;
    cout << A::count;
}