/* FRIEND CLASS --->> */

// Use to access the private and protected members of another class.

#include<iostream>
using namespace std;
class BaseClass{
    private:
    string name = "Aana";
    public:
    friend class A; // Declaration of the friend class A to access private and protected members of BaseClass.
};

// Friend class Initialization --->> 
class A{
    public:
    void display(BaseClass& obj){
        cout << "Private member of class: " << obj.name << endl;
    }
};
int main(){
    BaseClass b1;
    A a1;
    a1.display(b1);
}