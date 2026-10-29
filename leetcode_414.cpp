#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int thirdmax(vector<int>& nums){
    sort(nums.begin(), nums.end());
    return nums[nums.size()-3];
}
int main(){
    vector<int> nums={5,6,3,2,4,9};
    cout<<thirdmax(nums);
    return 0;

}