#include<iostream>
using namespace std;
int main(){
    // Used to store the memory address of the variables.
    int a = 10;
    int* ptr = &a;
    int** ptr2 = &ptr;
    // Memory address of (a) == Value of pointer
    cout << &a << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << ptr2 << endl;
    cout << &ptr2 << endl;
}