#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n= 10;
    vector<int> arr= {2,0,2,1,1,0,1,2,0,0};
    sort(arr.begin(),arr.end());
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}