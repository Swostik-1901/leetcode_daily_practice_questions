#include <iostream>    
#include <vector> 
#include <algorithm>
using namespace std;
bool istraingle(vector<int>& nums){
    if(nums.size()!=3){
        return false;
    }
    sort(nums.begin(), nums.end());
    if(nums[0] + nums[1]> nums[2]*nums[2]){
        return true;
    }
    return false;
}
vector<vector<int>> all_subarrays(vector<int>& nums){
    vector<vector<int>> subarrays;
    int n= nums.size();
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=i;j<n;j++){
            temp.push_back(nums[j]);
            subarrays.push_back(temp);
        }
    }
    return subarrays;
}
int triangleNumber(vector<int>& nums) {
    vector<vector<int>> all_possible_subarrays= all_subarrays(nums);
    int count=0;
    for(auto &p: all_possible_subarrays){
        if(istraingle(p)){
            count++;
        }
    }
    return count;
} 
int main(){
    vector<int> nums= {2,2,3,4};
    cout<<triangleNumber(nums);
    return 0;
}