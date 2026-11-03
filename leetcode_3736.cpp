#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int minMoves(vector<int>& nums) {
    int maximum_element= *max_element(nums.begin(), nums.end());
    int ans=0;
    for(int i=0;i<nums.size();i++){
        ans+= maximum_element-nums[i];
    }
    return ans;
}
int main(){
    vector<int>a={2,1,3};
    cout<<minMoves(a);
    return 0;
}