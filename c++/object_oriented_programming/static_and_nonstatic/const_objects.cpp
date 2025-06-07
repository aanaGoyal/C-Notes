/* CONSTANT MEMBERS --->> */

// There value cant be modified and remains same throughout the program.

#include<iostream>
using namespace std;
class A{
    public:
    const int x =10;
    int y = 20;
    // Constant member function --->>
    void display()const{
        cout << "Value of x: " << x;
        cout << y;
    }
    void display2(){
        cout << "Non Const function ";
    }
};
int main(){
    A a1;
    a1.display();

    const A a2;
    // cout << a2.display2(); // Const object can only access const member function 
}
