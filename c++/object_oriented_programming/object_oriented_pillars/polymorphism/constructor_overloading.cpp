#include <iostream>
using namespace std;

class Parent {
public:
   float area;
   // Default constructor with no parameters --->>
   Parent(){
    area = 0;
   }
   // Parameterized constructor with 2 parameters --->>
   Parent(int a, int b){
    area = a*b;
   }
};

int main(){
   Parent p1;
   Parent p2(20,30);
   cout << p1.area << endl;
   cout << p2.area << endl;
}
