#include<iostream>
using namespace std;
bool isArmstrong(int n){
    int original_number = n;
    int sumOfCubes = 0;
    while(n!=0){
        int digit = n%10;
        sumOfCubes += (digit*digit*digit);
        n = n / 10;
    }
    return sumOfCubes == original_number;
}
int main(){
    int n ;
    cin >> n;
    if(isArmstrong(n)){
        cout << "Is an Armstrong Number";
    }else{
        cout << "Not an Armstrong Number";
    }
}