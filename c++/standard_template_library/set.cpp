#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    for(auto val: s){
        cout << val << " ";
    }
    cout << endl;
    /* LOWER_BOUND */
    // Lower_bound checks the value passed to it and gives that value on dereferencing.
    // If that value is not present then gives the next max value after it.
    // If both that value and next value after it are not present then it gives s.end().
    cout << *s.lower_bound(4) << endl; 
    cout << *s.lower_bound(7) << endl;
    
    /* UPPER_BOUND */
    // Upper_bound states that its value should be greater than the key.
    cout << *s.upper_bound(4) << endl;
}