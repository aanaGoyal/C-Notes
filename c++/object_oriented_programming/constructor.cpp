#include<iostream>
using namespace std;

// CONSTRUCTOR --->> 
// Used to create object of a class.
// When we don't create a constructor but still the object gets created then there is a default constructor which gets created itself internally.

// Structure name should be similar to class name but it doesn't return anything.
// One class can only have one constructor but there can be many parameterised constructors.

class Student{
    public:
    int roll_no;
    string name;
    int marks;

    /* DEFAULT CONSTRUCTOR --->> */
    // Student(){

    // }
    Student(){
        
    }


    /* PARAMETERISED CONSTRUCTOR --->> */
    // Student (String name){

    // }
    
    /* CREATION OF PARAMETERISED CONSTRUCTOR --->> */
    Student(int studentRollNo, string studentName, int studentMarks){
        roll_no = studentRollNo;
        name = studentName;
        marks = studentMarks;
    }
    void printDetails(){
        cout << "Student Name: " << name << endl;
        cout << "Student roll number: " << roll_no << endl;
        cout << "Student marks: " << marks << endl;
    }

};
int main(){
    // This code starts to create error when a parametrised constructor is created as then default constructor doesn't get created internally.

    // To avoid this we can also declared a default constructor side by side.

    Student std1;
    std1.name = "Aana";
    std1.marks = 1000;
    std1.roll_no = 3084;
    std1.printDetails();

    // Defining details of object in parameterised constructor --->> 
    Student std2 = Student(2410,"Aana",1000);
    cout << std2.marks << endl;

}