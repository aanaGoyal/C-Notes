/* PASS BY REFERENCE --->> */

#include<bits/stdc++.h>
using namespace std;
void doSomething(string &s){
    s[0] = 't';
    cout << s << endl;
}
int main(){
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}

// Here original value of s is taken to the function.

// Arrays are alwayss passed by reference.