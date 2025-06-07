#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    // In list, we have all the functions similar in vector.
    // List also has functions from front so we call it a doubly linked list.
    l.push_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);
    for(int i:l){
        cout << i << " ";
    }

}