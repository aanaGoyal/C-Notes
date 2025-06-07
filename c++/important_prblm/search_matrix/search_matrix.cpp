#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    int startRow = 0;
    int endRow = n-1;
    while(startRow<=endRow){
        int midRow = startRow+(endRow-startRow)/2;
        if(matrix[midRow][0]<=target && matrix[midRow][m-1]>=target){
            int startColumn = 0;
            int endColumn = m-1;
            while(startColumn<=endColumn){
                int midColumn = startColumn+(endColumn-startColumn)/2;
                if(matrix[midRow][midColumn]==target){
                    return true;
                }else if(matrix[midRow][midColumn]>target){
                    endColumn=midColumn-1;
                }else{
                    startColumn = midColumn+1;
                }
            }
        }else if(matrix[midRow][0]>target){
            endRow = midRow-1;
        }else{
            startRow = midRow+1;
        }
    }
    return false;
}
int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 34;
    cout << searchMatrix(matrix,target);
}