/* PRIVATE DESTRUCTOR --->> */

// If we make the default constructor of non dynamic objects private, this will give an error.
// But for dynamic objects and pointer this will work fine as the user is now responsible to delete those objects from memeory.

#include <iostream>
using namespace std;
class Test {
private:
	~Test() {
        cout << "Destructor called";
    }
};

int main(){
    Test* t = new Test; // Dynamic memory allocation 

    // Test* t; // Non dynamic will give error
}
