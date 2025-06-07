/* FRIEND GLOBAL FUNCTION --->> */

// Making the private value accessed using the friend function.
#include<iostream>
using namespace std;
class BaseClass{
    private:
    string name = "Aana";
    public:
    friend void displayDetails(BaseClass& obj); // Friend function declaration 
};

// Global function --->> 
void displayDetails(BaseClass &obj){
    cout << "Private value is: " << obj.name << endl;
}
int main(){
    BaseClass b1;
    displayDetails(b1);
}