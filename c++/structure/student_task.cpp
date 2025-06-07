#include<iostream>
#include<vector>
using namespace std;


typedef struct Employee{
    string name ;
    double employSalary;
    string department;
    string address;
}Emp;
int main(){
    struct Employee employee1;
    employee1.name = "Ram";
    employee1.employSalary = 821331;
    employee1.department = "Sales Department";
    employee1.address="Mumbai";

    struct Employee employee2;
    employee2.name = "Sham";
    employee2.employSalary = 2873981;
    employee2.department = "Income Tax Department";
    employee2.address="Delhi";

    struct Employee employee3;
    employee3.name = "Rohan";
    employee3.employSalary = 123179;
    employee3.department = "Working Department";
    employee3.address="Punjab";

    struct Employee employee4;
    employee4.name = "Sohan";
    employee4.employSalary = 213124;
    employee4.department = "Sales Department";
    employee4.address="Shimla";

    struct Employee employee5;
    employee5.name = "Simran";
    employee5.employSalary = 2312213;
    employee5.department = "Sales Department";
    employee5.address="Mumbai";

    vector<Employee> employee ; 
    employee.push_back(employee1);
    employee.push_back(employee2);
    employee.push_back(employee3);
    employee.push_back(employee4);
    employee.push_back(employee5);

    for(int i=1; i<employee.size(); i++){
        cout << employee[i].name << endl;
    }

    // for(int i=1; i<employee.size(); i++){
    //     if(employee[i].department == "IT"){
    //         cout << employee[i].name << endl;
    //     }
    // }

    int sum = 0;
    for(int i=0; i<employee.size(); i++){
        sum+=(employee[i].employSalary);
    }
    cout << sum;

    Emp emp6 = {"Aana", 283789127, "IT"};
    // cout << emp6;

    
}
