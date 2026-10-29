#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool isGood(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    for(int i=0; i<n-1;i++){
        if(nums[i]!=i+1){
            return false;
        }
    }
    if(nums[n-1]==n-1){
        return true;
    }else{
        return false;
    }
}
int main(){
    vector<int>nums= {2,1,3,3};
    cout<<isGood(nums);
    return 0;

}