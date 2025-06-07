#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> arr = {4,1,5,2,3};
    int n = arr.size();
    for(int i =0; i<n; i++){
        int smallest_index = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[smallest_index]){
                smallest_index=j;

            }
        }
        swap(arr[i],arr[smallest_index]);

    }
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}