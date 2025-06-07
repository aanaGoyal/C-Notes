/* FUNCTION OVERLOADING --->> */

// Same function name but either having different number of argumnets or different types of arguments.

#include<iostream>
using namespace std;

class A{
    public:
    void add(int a, int b){
        cout << "Sum of a  and b is: " << a + b;
    }
    void add(double a, double b){
        cout << "Sum of a and b is: " << a + b;
    }
};      
int main(){
    A a1;
    a1.add(2,3);
}