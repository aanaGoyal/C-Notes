#include<iostream>
using namespace std;
// Single child class can inherit multiple base classes.
class Parent1{
    public:
    void show(){
        cout << "Base class 1" << endl;
    }
};
class Parent2{
    public:
    void show1(){
        cout << "Base class 2" << endl;
    }
};
class Child:public Parent1, public Parent2{
    public:
    void show3(){
        cout << "Derived Class" << endl;
    }
};
int main(){
    Child c1;
    c1.show1();
    c1.show();
}