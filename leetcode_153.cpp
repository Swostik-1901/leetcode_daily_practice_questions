#include <iostream>
#include <vector>
using namespace std;
int findMin(vector<int>& nums) {
    int n= nums.size();
    int left=0;
    int right= n-1;
    while (left<right)
    {
        int mid= left+(right-left)/2;
        if(nums[mid]>nums[right]){
            left= mid+1;
        }else{
            right= mid;
        }
    }
    return nums[left];
    
}
int main(){
    vector<int> nums= {3,4,5,6,1,2};
    cout<<findMin(nums);
    return 0;
}