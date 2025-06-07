/* FRIEND FUNCTION OF ONE CLASS IN ANOTHER CLASS --->> */

#include<iostream>
using namespace std;
class B;
class anotherClass{
    
    public:
    void display(B &obj);
};
class B{
    private:
    string name = "Aana";
    public:
    friend void anotherClass::display(B& obj);
};
void anotherClass::display(B& obj){
    cout << obj.name << endl;
}
int main(){
    B b1;
    anotherClass a1;
    a1.display(b1);
}