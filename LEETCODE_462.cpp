#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minMoves2(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int median= nums[nums.size()/2];
    long long ans= 0;
    for(int val: nums){
        ans+= abs(val-median);
    }
    return ans;
}
int main(){
    vector<int> a= {1,2,3};
    cout<<minMoves2(a);
    return 0;
}