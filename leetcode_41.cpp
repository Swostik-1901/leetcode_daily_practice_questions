#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n= nums.size();
    int i=1;
    if(nums[0]>1){
        return  1;
    }
    for(int j=0;j<n;j++){
        if(nums[j]==i){
            i++;
        }
    }
    return i;
    
}
int main(){
    vector<int> nums= {7,9,8,12,1};
    cout<<firstMissingPositive(nums);
    return 0;
}