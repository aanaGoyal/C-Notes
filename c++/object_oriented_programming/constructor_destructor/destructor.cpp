/* DESTRUCTORS --->> */

// Called automatically to destroy the object.
// Default destructor is used until and unless we use pointer or dynamic allocated memory.
#include <iostream>
using namespace std;
class Test {
public:
    // User-Defined Constructor
    Test() { cout << "Constructor executed"; }

    // User-Defined Destructor
    ~Test() { cout << "\nDestructor executed"; }
};
main(){
    Test t;
    return 0;
}
