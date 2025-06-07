#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int max_sum = INT_MIN;
    int current_sum = 0;
    for(int i=0; i<n; i++){
        current_sum+=arr[i];
        max_sum=max(current_sum,max_sum);
        if(current_sum<0){
            current_sum=0;
        }
    }
    cout << max_sum;
}