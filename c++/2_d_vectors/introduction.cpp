#include<iostream>
#include<vector>
using namespace std;
// In vectors we can give rows with different number of columns.
int main(){
    vector<vector<int>>matrix = {{1,2,3},{4,5,6}};
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}