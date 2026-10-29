#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m= grid.size();
    int n= grid[0].size();
    int total= m*n;
    vector<int>flatten;
    for(int i= 0; i<m;i++){
        for(int j=0;j<n;j++){
            flatten.push_back(grid[i][j]);
        }
    }
    vector<int> shifted(total);
    for(int i=0;i<total; i++){
        shifted[(i+k)%total]= flatten[i];
    }
    vector<vector<int>> result(m, vector<int>(n));
    int index=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            result[i][j]= shifted[index];
            index++;
        }

    }
    return result;
}
int main(){
    vector<vector<int>> grid={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> result= shiftGrid(grid,1);
    for(auto row: result){
        for(auto val: row){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}