#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr;
    int* ptr2 = ptr + 2;

    cout << "Value of ptr: " << ptr << endl;
    cout << "Value of ptr2: " << ptr2 << endl;
    cout << ptr2-ptr << endl;
}