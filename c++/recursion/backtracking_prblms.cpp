/* BACKTRACKING --->> When we don't want to use i+1 and instead use i-1, then we use backtracking. */

/* PRINT NUMBERS FROM 1 TO N USING BACKTRACKING --->> */
#include<bits/stdc++.h>
using namespace std;
// void solve(int i, int n){
//     if(i<1){
//         return;
//     }
//     solve(i-1,n);
//     cout << i << " ";
// }
// int main(){
//     int n;
//     cin >> n;
//     solve(n,n);
// }

/* MECHANISM --->>
    i==n;
    i==4;
    if : cancel;

    solve(3,4);
    if : cancel;

    solve(2,4);
    if : cancel;

    solve(1,4);
    if : cancel;

    solve(0,4);
    if : return;

    then moves to print statement of solve(1,4).
    and prints 1

    and soo on.....
*/




/* PRINT NUMBERS FROM N TO 1 USING BACKTRACKING --->> */
void f(int i,int n){
    if(i>n){
        return;
    }
    f(i+1,n);
    cout << i << " "; 

}
int main(){
    int n;
    cin >> n;
    f(1,n);
}