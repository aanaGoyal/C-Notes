#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    // Duplicate values can't be stored
    unordered_map<string,int> m;
    m.emplace("tv",100);
    m.emplace("laptop",100);
    m.emplace("watch",36);
    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }
}