#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralMatrix(vector<vector<int>> matrix){
    vector<int>ans;
    int n = matrix.size();
    int m = matrix[0].size();
    int top = 0;
    int bottom = n-1;
    int left = 0;
    int right = m-1;
    int count = 0;
    while(count <(n*m)){
        for(int i=left; i<=right && count < (n*m); i++){
            ans.push_back(matrix[top][i]);
            count++;
        }top++;;
        for(int i=top; i<=bottom && count < (n*m); i++){
            ans.push_back(matrix[i][right]);
            count++;
        }right--;
        for(int i=right; i>=left && count < (n*m); i--){
            ans.push_back(matrix[bottom][i]);
            count++;
        }bottom--;
        for(int i=bottom; i>=top && count < (n*m); i--){
            ans.push_back(matrix[i][left]);
            count++;
        }left++;
    }
    return ans;

}
int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6},{7,8,9}};
    vector<int> spiralmatrix = spiralMatrix(matrix);
    for(int i=0; i<spiralmatrix.size(); i++){
        cout << spiralmatrix[i] << " ";
    }

}