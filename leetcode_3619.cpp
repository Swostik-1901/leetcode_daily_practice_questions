#include <iostream>
#include <vector>
using namespace std;
long long dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& visited){
    int m= grid.size();
    int n= grid[0].size();
    visited[i][j]= true;
    long long sum= grid[i][j];
    int dx[4]={-1,1,0,0};
    int dy[4]={0,0,-1,1};
    for(int k=0;k<4;k++){
        int ni=i+dx[k];
        int nj=j+dy[k];
        if(ni>=0 && ni<m && grid[ni][nj]>0 && !visited[ni][nj]){
            sum+= dfs(ni, nj, grid, visited);
        }
    }
    return sum;
}
int countIslands(vector<vector<int>>& grid, int k) {
    int m= grid.size();
    int n= grid[0].size();
    vector<vector<bool>> visited(m, vector<bool>(n,false));
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]>0 && !visited[i][j]){
                long long islamdsum= dfs(i,j,grid, visited);
                if(islamdsum%k==0){
                    count++;                }
            }
        }
    }
    return count;
}

int main(){
    vector<vector<int>> grid={
        {0,2,1,0,0},
        {0,5,0,0,5},
        {0,0,1,0,0},
        {0,1,4,7,0},
        {0,2,0,0,8}
    };
    int k=5;
    cout<<"answer= "<<countIslands(grid,k)<<endl;
    return 0;
}