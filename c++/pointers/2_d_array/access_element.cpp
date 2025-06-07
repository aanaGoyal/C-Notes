#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums [3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };

    // 0 --- >> Rows
    // 1 --->> Columns
    cout << *(*(nums + 0)) << endl;
    cout << *(*(nums + 0) +1) << endl;
    cout << *(*(nums +1));

    int rows;
    cout << "No of rows:";
    cin >> rows;
    int columns;
    cout << "columns";
    cin >> columns;
    int arr[rows][columns];
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin >> *(*(arr+i) + j);
        }
    }




    int row;
    cout << "No of rows:";
    cin >> row;
    int column;
    cout << "columns";
    cin >> column;
    vector<vector<int>>num1 (row, vector<int>(column));
    for(int i=0; i<row; i++){
        for(int j=0; j<column; j++){
            cin >> *(*(num1.data() +i) + j);
        }
    }
}