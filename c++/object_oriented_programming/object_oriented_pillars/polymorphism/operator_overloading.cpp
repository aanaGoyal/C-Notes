/* OPERATOR OVERLOADING --->>  */

// One operator performing two different operations.
// For eg. addition operator(+) --->> concatenate two strings and add two integers.

#include<iostream>
using namespace std;
class Complex{
    public:
    int real,img;
    Complex(int r, int i):real(r),img(i){};
    Complex operator+(const Complex& obj){
        return Complex(real+obj.real,img+obj.img);
    }
};
int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1+c2;
    cout << c3.real << " + " << c3.img << endl; 
}