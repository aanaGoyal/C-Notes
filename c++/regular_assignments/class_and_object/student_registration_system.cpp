#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int roll_number;
    double marks;
    Student(string studentName, int studentRollNumber, double studentMarks){
        name= studentName;
        roll_number= studentRollNumber;
        marks= studentMarks;
    }
    void member(){
        cout << "Student name: " << name << endl;
        cout << "Student roll number: " << roll_number << endl;
        cout << "Student marks: " << marks << endl;
    }
};
int main(){
    // Student student1 = Student(45, "Aana", 1000);
    // cout << student1.studentName<< endl;
}