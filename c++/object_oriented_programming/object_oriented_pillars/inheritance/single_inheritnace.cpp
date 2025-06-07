#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout << "This animal eats food" << endl;
    }
}; 
// Dog class inheriting animal class.

class Dog:public Animal{
    public:
    void bark(){
        cout << "Dog Barks" << endl;
    }
}; 

int main(){
    Dog d;
    d.eat(); // Inherited from animal class
}