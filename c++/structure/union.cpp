#include<iostream>
using namespace std;
// Union stores only one value at a time.
union Data{
    int intValue;
    float secondValue;
};
int main(){
    Data db1;
    db1.intValue = 20;
    cout << db1.intValue << endl;

    db1.secondValue = 128.2;
    // Here only secondValue will be accessed as it is printed first and the other one will give the garbage value.
    cout << db1.secondValue << endl;
    cout << db1.intValue << endl;
}