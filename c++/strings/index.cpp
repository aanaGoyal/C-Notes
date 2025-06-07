#include<bits/stdc++.h>
using namespace std;
int main(){

    // Updated version of char arrays is string 

    string s = "Aana";
    // To extract character.
    cout << s[2] << "\n";

    // Size or length of string;
    int len = s.size();
    cout << len << "\n";
    cout << s[len-1];

    // To get spaced input from user we use getline here also.
    string str;
    getline(cin, str);
    cout << str;
    return 0;
}