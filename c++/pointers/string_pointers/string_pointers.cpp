#include<iostream>
using namespace std;
int main(){
    string name = "Aana";
    char* ptr = &name[0];
    cout << ptr << endl;
    cout << *(ptr+1);
}