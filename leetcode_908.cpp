#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int smallestRangeI(vector<int>& nums, int k){
    int mini = *min_element(nums.begin(),nums.end());
    int maxi = *max_element(nums.begin(),nums.end());
    return max(0,maxi - mini -2*k); 
}
int main(){
}