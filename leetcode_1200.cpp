#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;
int find_minimum_difference(vector<int>& nums){
    int min_difference=INT_MAX;
    sort(nums.begin(), nums.end());
    for(int i=0;i<nums.size()-1; i++){
        min_difference= min(min_difference, nums[i+1]- nums[i]);
    }
    return min_difference;
}
vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
    int minimum_difference= find_minimum_difference(arr);
    vector<vector<int>> result;
    // sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i++){
        int difference= arr[i+1]- arr[i];
        if(difference== minimum_difference){
            result.push_back({arr[i], arr[i+1]});
        }
    }
    return result;
}
int main(){
    vector<int> a= {4,2,1,3};
    vector<vector<int>> ans= minimumAbsDifference(a);
    for(auto &p: ans){
        for(int val: p){
            
            cout<<val<<",";
            
        }

        cout<<endl;
    }
    
    return 0;

}