#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,6> nums = {1,2,3,4,5,6};
    cout << nums.size() << endl;
    cout << nums.empty() << endl;
    cout << nums.front() << endl;
    cout << nums.back() << endl;
    cout << nums.at(2) << endl;

    array<int,5> arr;
    arr.fill(10);
    for(int i=0; i<arr.size();i++){
        cout << arr[i] << " " << endl;
    }
}