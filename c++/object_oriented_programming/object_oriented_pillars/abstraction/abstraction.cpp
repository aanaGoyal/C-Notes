/* ABSTRACTION --->> */

// Showing only the essential features and ignoring the other details.

// A class that cannot be instantiated directly and contains at least one pure virtual function.

#include <iostream>
using namespace std;
class implementAbstraction {
    private:
        int a, b;
    public:
        void set(int x, int y){
            a = x;
            b = y;
        }

        void display(){
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
        }
};

int main(){
    implementAbstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
