// DETACH --->> Allows the threads to run independently.
#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
void print(){
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Thread done " << endl;
}
int main(){
    thread t(print);
    t.detach();
    cout << "Main continues...." << endl;
    this_thread::sleep_for(chrono::seconds(3));
}