#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a = {1,2,3,0,0,0};
    vector<int> b= {2,5,6};
    int m = 3;
    int n=3;
    int index= m+n-1;
    int i= m-1;
    int j= n-1;
    while(i >= 0 && j >= 0){
        if (a[i] >= b[j]){
            a[index] = a[i];
            i--;
            index--;
        }else{
            a[index] = b[j];
            j--;
            index--;
        }
    }
    while(j>=0){
        a[index] = b[j];
        index--;
        j--;
    }
    for(int i=0; i<a.size(); i++){
        cout << a[i] << " ";
    }

}