#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int dominantIndex(vector<int>& nums) {
    int n=  nums.size();
    if(n==0){
        return -1;
        
    } 
    int idx= 0;
    for(int i=0; i<n;i++){
        if(nums[i]>nums[idx]){
            idx= i;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=idx && nums[idx]< 2*nums[i]){
            return -1;
        }
    }
    return idx;
}
int main(){
    vector<int> a= {3,6,0,2};
    cout<<dominantIndex(a);
    return 0;
}