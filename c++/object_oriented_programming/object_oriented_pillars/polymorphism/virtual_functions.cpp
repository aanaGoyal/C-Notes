/* VIRTUAL FUNCTIONS --->> */

// Member function declared in the base class which is re-defined in the derived class.

// C++ program to access overridden function
// in main() using the scope resolution operator ::

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void display(){
        cout << "Parent Class" << endl;
    }
};

class Child : public Parent {
public:
    void display()override{
        cout << "Child Class" << endl;
    }
};

int main(){
    Parent* ptr;
    Child c1;
    ptr=&c1;
    ptr->display();
}
