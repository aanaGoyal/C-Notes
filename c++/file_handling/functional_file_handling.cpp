#include<iostream>
#include<fstream>
using namespace std;
string addStudent(int roll, string name, string city){
    // ios:: app --->> To append the data
    ofstream fout("student.txt",ios::app);
    fout << roll << "," << name << "," << city << "\n";
    fout.close();

    return "Student added to the file successfully";
}

string getStudentByRollNumber(int roll){
    // Reading the file 
    ifstream fin("student.txt");
    string line;
    bool found = false;
    // Reading the file line by line.
    while(getline(fin, line)){
        // Word is read until , not found.
        int pos = line.find(",");
        // First substring until there will be rollNumber, so putting it in r.
        // Stoi converting string to int.
        int r = stoi(line.substr(0,pos));
        // Checking the r with the rollNumber present in the file .
        if(r==roll){
            found = true;
            break;
        }
    }
    fin.close();
    if(found){
        return "Student Found Successfully";
    }else{
        return "Invalid Roll Number";
    }
}
int main(){
    int number_of_students;
    cout << "No. of students to add: ";
    cin >> number_of_students;

    while(number_of_students-- != 0){
        int rollNumber;
        string name,city;
         
        cout << "Enter Student Roll No: ";
        cin >> rollNumber;

        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Student City: ";
        cin >> city;

        cout << addStudent(rollNumber,name,city) << endl;
    }
    int studentRoll;
    cout << "Roll of student to be found: ";
    cin >> studentRoll;
    cout << getStudentByRollNumber(studentRoll);
}