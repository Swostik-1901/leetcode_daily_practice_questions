#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int>& nums) {
    int n= nums.size();
    int left= 0;
    int right= n-1;
    while (left<right)
    {
        int mid= left+(right-left)/2;
        if(nums[mid]>nums[right]){
            left= mid+1;
        }else if(nums[mid]<nums[right]){
            right= mid;
        }else{
            right--;
        }
    }
    return nums[left];
    
}
int main(){
    vector<int> nums= {1,3,3};
    cout<<findMin(nums);
    return 0;
}