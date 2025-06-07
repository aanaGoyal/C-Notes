// Prevents accessing the same shared resource at the same time.

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex m; // Creating mutex

void sayHello(){
    m.lock(); // Locking the thread to execute its whole data first if it is being used.
    cout << "Hello from thread 1" << endl;
    m.unlock();
}
void greet(string name){
    m.lock();
    cout << "Hello " << name << endl;
    m.unlock();
}
int main(){
    thread t1(sayHello);
    thread t2(greet, "Aana");
    t1.join();
    t2.join();

    cout << "Main thread ends" << endl;

}

// We can use lock_guiard also for more safety --->>
// lock_guard<mutex>guard(m);