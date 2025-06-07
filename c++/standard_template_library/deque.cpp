#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> d;
    // In deque, we have all the functions similar in list.
    // Deque is a doubly ended queue
    // Dequeue is used to pop elements from queue.
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(5);
    for(int i:d){
        cout << i << " ";
    }

}