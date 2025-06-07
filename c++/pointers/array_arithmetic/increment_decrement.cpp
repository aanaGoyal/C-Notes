#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value after incrementation: " << ++ptr << endl;
}