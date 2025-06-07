/* PARAMETERIZED CONSTRUCTOR --->> */

#include <iostream>
using namespace std;

class A {
public:
    int val;
    A(int x) {
        val = x;
    }
};

int main() {
  	// Creating object with a parameter
    A a(10);
    cout << a.val;
    return 0;
}
