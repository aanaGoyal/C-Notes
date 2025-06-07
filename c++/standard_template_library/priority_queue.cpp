#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Contains largest element at the top of queue.
    priority_queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.top();
    q.pop(); // Largest element is removed first.
    cout << q.top();

    // To reverse this order, and getting the smallest element at the top we have a functor--->> Function Object :
    priority_queue<int,vector<int>,greater<int>> qu;


}