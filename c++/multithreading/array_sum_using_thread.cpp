#include<iostream>
#include<thread>
#include<vector>
#include<mutex>
using namespace std;

int partial_sum = 0;
mutex m;

void SumPart(vector<int> arr, int start, int end){
    int temp = 0;
    for(int i=start; i<end; i++){
        temp+=arr[i];
    }
    partial_sum+=temp;
    cout << temp << endl;
    lock_guard<mutex>guard(m);
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    thread t1(SumPart, ref(arr), 0,5);
    thread t2(SumPart, ref(arr), 5,10);
    t1.join();
    t2.join();
    cout << "total sum: " << partial_sum << endl;
    cout << "Main thread ends" << endl;

}