#include<iostream>
using namespace std;
int main(){
    // For simple integer variables:
    // int x,y;
    // cin >> x >> y;
    // cout << "Value of x: " << x << "and y: " << y << endl;

    // For multiline string variable:
    string str;
    getline(cin,str);
    cout << str;
    return 0;
}