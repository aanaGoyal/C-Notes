#include<iostream>
using namespace std;
/* STATIC OBJECTS --->> */
// Once created they cant be created again and they keep their identity true and will be called only once.
class A{
    public:
    A(){
        cout << "Default constructor called";
    }
};
void demo(){
    static A a1;
    // Without static this object will be created twice in the memory.
    // But to create it once and keep its identity true we make it static.
}
int main(){
    demo();
    demo();
}