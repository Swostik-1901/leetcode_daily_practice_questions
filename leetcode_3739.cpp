#include <iostream>
#include <vector>
using namespace std;
int countMajoritySubarrays(vector<int>& nums, int target) {
    int n= nums.size();
    int ans= 0;
    for(int i=0;i<n;i++){
        int target_occurence= 0;
        for(int j=i; j<n;j++){
            if(nums[j]==target){
                target_occurence++;
            }
            int len_subarray=j-i+1;
            if(target_occurence>len_subarray/2){
                ans++;
            }
        }
    }
    return ans;
}
int main(){
    vector<int>ans= {1,2,2,3};
    cout<<countMajoritySubarrays(ans, 2);
    return 0;
}