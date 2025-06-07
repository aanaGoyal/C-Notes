#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int,pair<int,int>> p = {1,{3,4}};
    cout << p.first << endl;
    cout << p.second.first << endl;

    // Difference between push_back and emplace_back:
    vector<pair<int,int>>vec = {{1,2},{3,4},{5,6}};
    vec.push_back({7,8}); // It only inserts the value
    vec.emplace_back(7,8); // It is used to create inplace objects.

    for(auto i: vec){
        cout << i.first << " " << i.second << endl;
    }

}