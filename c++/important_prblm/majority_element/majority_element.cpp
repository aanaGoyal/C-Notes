#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector <int> arr, int n){
    for(int val:arr){
        int frequency = 0;
        for(int el: arr){
            if(el==val){
                frequency++;
            }
        }
        if(frequency>(n/2)){
            return val;
        }
    }
    return -1;
}
int main(){
    vector <int> arr = {1,2,2,1,1};
    int n = arr.size();
    cout << majorityElement(arr,n);
    return 0;
}