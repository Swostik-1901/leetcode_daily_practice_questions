#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool check_for_condition(vector<int>& nums, int k){
    int minimum_element= *min_element(nums.begin(), nums.end());
    int maximum_element= *max_element(nums.begin(), nums.end());
    if(maximum_element-minimum_element<=k){
        return true;
    }else{
        return false;
    }
}

vector<vector<int>> divideArray(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    vector<vector<int>>ans;
    int n= nums.size();
    for(int i=0;i<n;i+=3){
        vector<int> row;
        for(int j=i;j<i+3;j++){
            row.push_back(nums[j]);
        }
        if(check_for_condition(row,k)){
            ans.push_back(row);
        }else{
            return {};
        }
    }
    return ans;
}
int main(){
    vector<int>a={1,3,4,8,7,9,3,5,1};
    int k=2;
    vector<vector<int>> result= divideArray(a,k);
    for(auto &p: result){
        for(int val: p){
            cout<<val<<" ";
        }
    }
return 0;
}