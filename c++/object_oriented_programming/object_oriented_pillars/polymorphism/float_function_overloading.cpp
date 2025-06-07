#include<iostream>
using namespace std;
void test(float s,float t){
	cout << "Function with float called ";
}


void test(int s,int t){
	cout << "Function with int called ";
}


int main(){
    // test(3.5,6.8);
    // Compiler can't find whether to convert float to integer or integer to float so it will give ambigious error.

    // So to avoid this error, we have to put suffix 'f' at the end of the parameter to let the compiler know that its float value.
	test(3.5f, 5.6f);
	return 0;
}
