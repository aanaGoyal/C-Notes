#include <iostream>
using namespace std;
class Base {
private:
	int count;
public:
	Base(int i):count(i){};

    // For pre increment
	Base operator++(int){
        return (count++);
    }

    // For post increment
	Base operator++(){
		count = count + 1;
		return count;
	}

	void Display(){
        cout << "Count: " << count << endl;
    }
};
int main(){
	Base i(5);
    // PRE INCREMENT
    Base y = ++i;
    i.Display();
    y.Display();

    
	// POST INCREMENT
    Base x = i++;
    i.Display();
    x.Display();
	
	return 0;
}
