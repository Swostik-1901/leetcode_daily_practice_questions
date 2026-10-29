#include <iostream>
#include <vector>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int n= nums.size();
    if(target<nums[0]){
        return 0;
    }else if(target>nums[n-1]){
        return n;
    }
    for(int i=0; i<n;i++){
        if(nums[i]== target){
            return i;
        }else if(nums[i]<target && nums[i+1]>target ){
            return i+1;
        }
    }
    return n;
}

int main(){
    vector<int> nums= {1,3,5,6};
    int target= 4;
    cout<<searchInsert(nums, target);
    return 0;
}