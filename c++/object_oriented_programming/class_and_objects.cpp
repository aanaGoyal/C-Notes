#include<iostream>
using namespace std;
// Blueprint to create mutiple objects.
class Student{
    public:
    // ATTRIBUTES OF THE CLASS--->> DATA MEMBERS
    int roll_no;
    string name;
    int marks;

    // METHODS --->>
    // These are the functions declared in a particular class.
    // They are called methods because they can't be called from outside and can be accessed only with the class name.

    void printDetails(){
        cout << "Student Name: " << name << endl;
        cout << "Student roll number: " << roll_no << endl;
        cout << "Student marks: " << marks << endl;
    }

}; // Class works as a terminal so we add semicolon to close it.
int main(){
    // Object of class --->>

    /* WHAT DO OBJECTS HAVE ?? */
    // They have state and behaviour.
    Student std1;
    std1.name = "Aana";
    std1.marks = 1000;
    std1.roll_no = 3084;
    std1.printDetails();

    Student std2;
    // It gives garbage values when the values are not given.
    std2.printDetails();
}