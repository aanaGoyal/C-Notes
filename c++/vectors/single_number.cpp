#include<iostream>
#include<vector>
using namespace std;
// UNIQUE NUMBER FROM POSITIVE, NEGATIVES --->> 
int singleNumber(vector<int>& vec){
    int ans = 0;
    for(int i: vec){
        ans+=i;
    }
    return ans;
}

/* UNIQUE NUMBER FROM MANY INTEGERS --->>      */
int uniqueNumber(vector<int>& vect){
    int ans = 0;
    for(int i: vect){
        ans = ans^i;
    }
    return ans;
}
int main(){
    vector<int> vec = {1,2,3,-2,-1};
    vector<int> vect = {1,2,3,1,2}; 

    cout << singleNumber(vec) << endl;
    cout << uniqueNumber(vect);
    
    return 0;

}