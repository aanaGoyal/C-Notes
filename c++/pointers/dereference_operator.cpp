#include<iostream>
using namespace std;
int main(){
    int a =10;
    int* ptr = &a;
    // Accessing value through memory address.
    cout << *(&ptr) << endl;

    // Accessing value through ptr.
    cout << ptr;
}