#include<iostream>
using namespace std;
int main(){
    int x = 2, y = 3;
    if(x++, y++, x+y == 7){
        cout << "True";
    }else{
        cout << "False";
    }
    cout << x << y;
}