#include<bits/stdc++.h>
using namespace std;
/* PRINT NAME N TIMES --->> */
// void f(int i,int n){
//     if(i>n){
//         return;
//     }else{
//         cout << "Aana" << endl;
//         f(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     f(1,n);
// }

/* PRINT LINEARLY FROM 1 TO 10 --->>  */
// void f(int i,int n){
//     if(i>n){
//         return;
//     }else{
//         cout << i << " ";
//         f(i+1,n);
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     f(1,n);
// }

/* PRINT IN TERMS OF N TO 1.*/
void f(int i,int n){
    if(i>n){
        return;
    }else{
        cout << n << " ";
        f(i,n-1);
    }
}
int main(){
    int n;
    cin >> n;
    f(1,n);
}