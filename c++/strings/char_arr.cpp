#include<iostream>
#include<cstring>
using namespace std;
int main(){
    //       \0 is a Null Character.
    //       It makes the string a valid string.

    char str[] = {'a','b','c','\0'};
    cout << str << endl;
    cout << strlen(str) << endl;
    cout << str[3] << endl;

    // To get the string having spaces we use getline.
    char str2[100];
    cin.getline(str2,100);
    cout << str2 << endl;

    // To get multi lines of code from the user we use delimeter
    // Syntax --->> cin.getline(str,length,delim)
    char str3[100];
    cin.getline(str3,100,'$');
    cout << str3 << endl;
}