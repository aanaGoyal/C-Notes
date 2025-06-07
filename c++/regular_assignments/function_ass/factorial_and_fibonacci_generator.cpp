#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void menu(){
    cout << "1 for factorial " << endl;
    cout << "2 for n fibonacci numbers " << endl;
    cout << "3 for exit " << endl;
}
int factorial(int a){
    int product = 1;
    for(int i=1; i<=a; i++){
        product*=i;
    }
    return product;
}
void fibonacci(int a){
    int b=0;
    int c =1;
    for(int i=0; i<a; i++){
        cout << a << " ";
        int next_number = c+b;
        b=c;
        c=next_number;
    }

}
int main(){
    bool ans = true;
    while(ans){
        menu();
        int n;
        cout << "Enter a choice: ";
        cin >> n;
        int a;
        switch (n)
    {
    case 1:
        cout << "Enter a number : ";
        cin >> a;
        cout << factorial(a) << endl;
        break;
    case 2:
        cout << "Enter a number : ";
        cin >> a;
        fibonacci(a);
    default:
        break;
    }
    } 
}