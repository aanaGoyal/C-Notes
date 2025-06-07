#include<iostream>
#include<map>
using namespace std;
int main(){
    map<string,int>m;
    m["tv"] = 50;
    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }

    // Other Maps:
    // 1. Multi-Map : Here we can't add the data directly through bracket or dot notation instead we have to use insert or emplace 
    multimap<string,int>multi;
    multi.emplace("laptop",1);
    for(auto p:multi){
        cout << p.first << " " << p.second << endl;
    }
}