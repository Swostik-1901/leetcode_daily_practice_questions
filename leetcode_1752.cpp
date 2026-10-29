#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool check(vector<int>& nums) {
    int n= nums.size();
    int check= 0;
    if(nums[0]<nums[n-1]){
        check++;// this check is done because in a sorted array the first element should bt greater than the last element and if not then it means the array has been rotated 
    }
    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            check++;
        }
    }
    if(check==1 || check ==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<int> nums= {3,4,5,1,2};
    cout<<check(nums);
    return 0;
}