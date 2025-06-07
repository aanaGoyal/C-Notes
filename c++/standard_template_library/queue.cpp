#include<iostream>
#include<queue>
using namespace std;
int main(){
    // Works on FIFO(First In First Out)
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop(); // 1 will be removed first.
    cout << q.front();

}