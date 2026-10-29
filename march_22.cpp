#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution{
public:       
    void rotate(vector<vector<int>>& mat){
        int n= mat.size();
        //find the transpose of the matrix
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j], mat[j][i]);
            }
        }
        //reverse each row to get the rotated matrix
        for(int i=0;i<n;i++){
            reverse(mat[i].begin(), mat[i].end());
        }


    }
    bool findrotation(vector<vector<int>>& mat, vector<vector<int>>& target){
        for(int i=0;i<4;i++){
            if(mat== target){
                return true;
            }
            rotate(mat);
        }
        return false;
    }
};
int main(){
    solution m1;
    vector<vector<int>> mat={{1,0,0},{0,1,0},{0,0,1}};
    vector<vector<int>> target={{0,0,1},{0,1,0},{1,0,0}};
    bool result= m1.findrotation(mat, target);
    cout<<result;
    return 0;
}