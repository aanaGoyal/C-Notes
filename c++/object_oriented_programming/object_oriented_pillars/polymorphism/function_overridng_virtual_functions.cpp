/* FUCTION OVERRIDING --->> */

// Child class defining one or more functions of the base class is called function overriding.

// Base class function must be declared as virtual to override it in child class.

#include<iostream>
using namespace std;
class Base{
    public:
    // Virtual function 
    virtual void displayDetails(){
        cout << "BASE CLASS FUNCTION" << endl;
    }
};  
class Derived:public Base{
    public:
    // Overriding the base class function 
    void displayDetails()override{
        cout << "DERIVED CLASS FUNCTION" << endl;
    }
};
int main(){
    // Pointer of base type
    Base* baseptr;

    // Object of derived class
    Derived d1;

    // Pointing base class pointer to derived class object
    baseptr=&d1;

    
    baseptr->displayDetails();
}