// In case of vectors we use FOR....EACH loop.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec ={1,2,3};
    for(int i: vec){
        cout << i << endl;
    }
    cout<< "size: " << vec.size() << endl; 
    vector <char> vect = {'a','b','c','d'};
    for(char i: vect){
        cout << i << endl;
    }
}