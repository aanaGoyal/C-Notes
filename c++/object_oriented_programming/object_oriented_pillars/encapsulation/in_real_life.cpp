#include<iostream>
using namespace std;
// CAR SPEED CONTROL SYSTEM --->>
class Car{
    private:
    int speed;
    public:
    Car(){
        speed = 0;
    }
    // Setter method to set speed with validation:
    void setSpeed(int s){
        if(s>=0 && s<=200){
            this-> speed = s;
        }else{
            cout << "Invalid Speed" << endl;
        }
    }

    // Getter method to get speed:
    int getSpeed(){
        return speed;
    }
};
int main(){
    Car c1;
    c1.setSpeed(50);
    cout << "Car speed : " << c1.getSpeed() << endl;

}