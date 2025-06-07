#include<iostream>
using namespace std;
int maxRowSum(int matrix[4][3], int rows, int columns){
    int maxSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int rowSum = 0;
        for(int j=0; j<columns; j++){
            rowSum += matrix[i][j];
        }
        maxSum = max(maxSum, rowSum);
    }   
    return maxSum; 
}
int main(){
    int matrix[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int rows = 4;
    int columns = 3;
    cout << maxRowSum(matrix, rows, columns);
}