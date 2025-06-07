#include<iostream>
#include<vector>
using namespace std;
/*      1st Method --->>       */
// int main(){
//     vector<int> vec;
//     cout << vec[0];
//     return 0;
// }

/*      2nd Method --->>       */
// int main(){
//     vector<int>vec = {1,2,3};
//     cout << vec[0];
//     return 0;
// }

/*      3rd Method --->>       */
int main(){
    vector<int>vec(3,1);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;
}