/* BINARY OPERATOR OVERLOADING --->>  */

// One argment is passed and overloading of an operator operating on two operands.
#include<iostream>
using namespace std;
class Distance{
    public:
    int feet,inch;
    Distance(int f, int i):feet(f),inch(i){};
    Distance(){
        feet = 0;
        inch = 0;
    }
    Distance operator+(Distance &obj){
        return Distance(feet+obj.feet,inch+obj.inch);
    }
};
int main(){
    Distance d1(10,20);
    Distance d2(30,40);
    Distance d3 = d1 + d2;
    cout << d3.feet << " " << d3.inch << endl;
}
