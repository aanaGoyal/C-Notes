#include <iostream>
using namespace std;
class Parent {
public:
    void display(){
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void display(){
        cout << "Derived Function" << endl;
    }
};

int main()
{
     Child c1;
     c1.display();

     // Accessing the parents display function 
     // Using scope resolution operator
     c1.Parent::display();
    return 0;
}
