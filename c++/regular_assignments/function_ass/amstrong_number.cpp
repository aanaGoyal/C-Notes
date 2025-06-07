#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
string checkArmstrong(int n){
    string number = to_string(n);
    int string_size = number.size();
    int orignial_number = n;
    int sum = 0;
    while(n>0){
        int rem = n%10;
        sum += pow(rem,string_size);
        n/=10;
    }
    if(sum==orignial_number){
        return "Armstrong Number";
    }else{
        return "Not An Armstrong Number";
    }

}
int main(){
    int n;
    cout << "Enter a number: " ;
    cin >> n;
    cout << checkArmstrong(n);
}