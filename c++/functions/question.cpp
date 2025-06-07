#include<bits/stdc++.h>
using namespace std;
int sum(int num1, int num2){
    int num3 = num1 +num2;
    return num3;
}
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int result = sum(num1,num2);
    cout << result;
    return 0;
} 

// Find minimum between two numbers 
int main_space(){
    int num3, num4;
    cin >> num3 >> num4;
    int minimum = min(num3, num4);
    cout << minimum;
    return 0;
}

/* On not writing return it will give a garbage value. */