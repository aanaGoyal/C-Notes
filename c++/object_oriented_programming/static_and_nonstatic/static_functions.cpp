/* STATIC MEMBER FUNCTIONS --->> */

// Can access only static members of the class.
// Properties similar to static data members 

#include <iostream> 
using namespace std; 

class Box { 
	private: 
	static int length; 
	static int breadth; 
	static int height; 
	public:
    int x = 10;
	static void print() { 
		cout << "The value of the length is: " << length << endl; 
		cout << "The value of the breadth is: " << breadth << endl; 
		cout << "The value of the height is: " << height << endl; 
	}
}; 

// initialize the static data members 
int Box :: length = 10; 
int Box :: breadth = 20; 
int Box :: height = 30; 


int main() {
	Box b; 
	cout << "Static member function is called through Object name: \n" << endl; 
	b.print(); 
	cout << "\nStatic member function is called through Class name: \n" << endl; 
	Box::print(); 
	return 0; 
}
