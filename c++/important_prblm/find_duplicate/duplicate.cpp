#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int findDuplicate(vector<int>arr){
    unordered_set<int>s;
    for(int i=0; i<arr.size(); i++){
        if(s.find(arr[i])!=s.end()){
            return arr[i];
        }
        s.insert(arr[i]);
    }
    return -1;
}
int main(){
    vector<int>arr = {3,1,3,4,2};
    cout << findDuplicate(arr);
}