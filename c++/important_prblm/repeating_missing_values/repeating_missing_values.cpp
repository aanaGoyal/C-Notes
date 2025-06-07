#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
vector<int> missingRepeatingValues(vector<vector<int>> grid){
    vector<int> ans;
    int a,b;
    unordered_set <int> s;
    int n = grid.size();
    int expected_sum = (n*n*((n*n)+1))/2;
    int actual_sum = 0;
    for(int i=0; i<grid.size(); i++){
        for(int j=0;j<n; j++){
            actual_sum += grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    b = expected_sum - (actual_sum-a);
    ans.push_back(b);
    return ans;
}
int main(){
    vector<vector<int>> grid = {{9, 1, 7}, {8, 9, 2}, {3, 4, 6}};
    vector<int>ans = missingRepeatingValues(grid);
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
}