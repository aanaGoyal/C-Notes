#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int heights[9]= {1,8,6,2,5,4,8,3,7};
    int maxWater = 0;
    int left_pointer=0;
    int right_pointer=n-1;
    while(left_pointer<right_pointer){
        int width = right_pointer-left_pointer;
        int height = min(heights[left_pointer],heights[right_pointer]);
        int currentWater = width*height;
        maxWater=max(currentWater,maxWater);
        if(heights[left_pointer<right_pointer]){
            left_pointer++;
        }else{
            right_pointer--;
        }
    }
    cout << maxWater;
}