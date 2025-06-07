#include<iostream>
#include<vector>
using namespace std;
int main(){
    int count_0 = 0;
    int count_1 = 0;
    int count_2 =0;
    vector<int> arr = {2,0,2,1,1,0,1,2,0,0};
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0){
            count_0++;
        }else if(arr[i]==1){
            count_1++;
        }else{
            count_2++;
        }
    }
    int index = 0;
    for(int i=0; i<count_0; i++){
        arr[index++] = 0;
    }
    for(int i=0; i<count_1; i++){
        arr[index++] = 1;
    }
    for(int i=0; i<count_2; i++){
        arr[index++] = 2;
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
}