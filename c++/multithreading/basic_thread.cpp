#include<iostream>
#include<thread>
using namespace std;
void sayHello(){
    cout << "Hello from thread 1" << endl;
}
void greet(string name){
    cout << "Hello " << name << endl;
}
int main(){
    thread t1(sayHello);
    thread t2(greet, "Aana");
    t1.join();
    t2.join();

    cout << "Main thread ends" << endl;

}