#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
    int n= nums.size();
    vector<int> output;
    sort(nums.begin(), nums.end());
    int i=1;
    
    while(i<n){
        if(nums[i]== nums[i-1]){
            if(output.empty() || output.back()!= nums[i]){
                output.push_back(nums[i]);
            }
        }
        i++;
    }
    return output;
}
int main(){
    vector<int> nums= {4,3,2,7,8,2,3,1};
    vector<int> res= findDuplicates(nums);
    for(int val: res){
        cout<<val<<" ";
    }
    return 0;
}