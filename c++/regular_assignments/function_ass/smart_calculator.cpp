#include<iostream>
#include<vector>
using namespace std;
void calculatorMenu(){
    cout <<"1. Addition"<<endl;
    cout <<"2. Find Square"<<endl;
    cout <<"3. Check Even"<<endl;
    cout <<"4. Find Count of small letters in the string"<<endl;
    cout <<"5. Find Factorial"<<endl;
    cout <<"6. Exit"<<endl;
}
int add(int a,int b){
    return a+b;
}
int square(int a){
    return a*a;
}
string checkEven(int a){
    if (a%2==0){
        return "Even";
    }else{
        return "Odd";
    }
}
int findLength(string name){
    int count = 0;
    string smallchar = "abcdefghijklmnopqrstuvwxyz";
    for(int i:name){
        for(int j:smallchar){
            if (i==j){
                count ++;
            }
        }
    }
    return count;
}
int factorial(int a){
    int fact = 1;
    for(int i=1; i<=a; i++){
        fact*=i;
    }
    return fact;
}
int main(){
    bool ans = true;
    while(true){
        calculatorMenu();
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        int a, b;
        string name;
        switch (choice)
        {
        case 1:
            cout << "Enter two numbers: ";
            cin >> a >> b;
            cout << "Addition is: " << add(a,b) << endl;
            break;
        case 2:
            cout << "Enter a number:";
            cin >> a;
            cout << "Square of number :" << square(a) << endl;
            break;
        case 3:
            cout << "Enter a number:";
            cin >> a;
            cout << "Check even :" << checkEven(a) << endl;
            break;
        case 4:
            cout << "Enter a string: ";
            cin >> name;
            cout << "Small char length in string: " << findLength(name) << endl;
            break;
        case 5:
            cout << "Enter a number:";
            cin >> a;
            cout << "Factorial of number :" << factorial(a) << endl;
            break;
        default:
            char result;
            cout << "Do you want to axit(y/n) ?";
            if(result=='Y' || result=='y'){
                ans=false;
                cout <<"Thank you for using the application"<<endl;
            }
            break;
        }

    }
}