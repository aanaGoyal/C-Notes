/* COPY CONSTRUCTOR --->>  */

// Constructor that creates an object using another object of the same class.

#include <iostream>
using namespace std;
class A {
public:
    int x;
};

int main() {
    A a1;
    a1.x = 10;
    cout << "a1: " << a1.x << endl;
    // Creating another object using a1
  	// Copy Constructor Calling
    A a2(a1);
    cout << "a2: " << a2.x;
    return 0;
}
