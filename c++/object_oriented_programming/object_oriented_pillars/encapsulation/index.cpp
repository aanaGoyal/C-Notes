#include<iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    /*      Setter method      */
    // To set the data
    void setData(string n, int a){
        this->name = n;
        if(age>=0){
            age = a;
        }else{
            cout << "Invalid Age";
        }
    }

    /*      Getter Method      */
    // To get the private data
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
};
int main(){
    Student s1;
    s1.setData("Aana",18);
    cout << "Age: " << s1.getAge() << endl;
    cout << "Name: " << s1.getName() << endl;
}