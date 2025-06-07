#include<iostream>
using namespace std;
// Struct Being Created
struct Student{
    string name;
    int roll;
};
int main(){
    // Object of struct being created
    struct Student std1;
    std1.name = "Aana";
    cout << std1.name << endl;
}