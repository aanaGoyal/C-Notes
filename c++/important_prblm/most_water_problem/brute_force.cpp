#include<iostream>
using namespace std;
int main(){
    int n = 9;
    int heights[9]= {1,8,6,2,5,4,8,3,7};
    int maxWater = 0;
    for(int leftboundary=0;leftboundary<n;leftboundary++){
        for(int rightboundary=leftboundary+1; rightboundary<n; rightboundary++){
            int width = rightboundary-leftboundary;
            int height=min(heights[rightboundary],heights[leftboundary]);
            int area = width*height;
            maxWater=max(maxWater,area);
        }
    }
    cout << maxWater;
}