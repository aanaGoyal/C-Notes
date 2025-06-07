#include<iostream>
#include<vector>
using namespace std;
int main(){
    // There are 2 interators in C++:
    // 1. vec.begin()
    // 2. vec.end()

    vector<int> vec = {1,2,3,4,5};

    cout << *(vec.begin()) << endl;
    // Vec.end() is exclusive and so dereferencing it gives the garbage value.
    cout << *(vec.end()) << endl;

    /* For accessing elements through iterators --->> */
    // Forward iteration 
    vector<int> :: iterator it;
    for(it=vec.begin(); it!=vec.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    // Backward iteration 
    vector<int> :: reverse_iterator itr;
    for(itr=vec.rbegin(); itr!=vec.rend(); itr++){
        cout << *itr << " ";
    }
    cout << endl;
    // Instead of writing so much, our modern C++ provides us the auto function which automatically understands the iterator.
    for(auto i=vec.rbegin(); i!=vec.rend(); i++){
        cout << *i << " ";
    }

}