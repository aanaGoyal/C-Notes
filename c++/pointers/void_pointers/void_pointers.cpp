#include<iostream>
using namespace std;
int main(){
    int num = 10;
    void *ptr = &num;
    cout << *( (int*)ptr ) << endl;  
}