#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    return nums[n-k];

}
int main(){
    vector<int> a= {3,2,1,5,6,4};
    cout<<findKthLargest(a, 2);
    return 0;
}