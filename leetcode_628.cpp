#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumProduct(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    int product_1= nums[0]*nums[1]*nums[n-1];
    int product_2= nums[n-1]*nums[n-2]*nums[n-3];
    return max(product_1, product_2);
}
int main(){
    vector<int>a= {1,2,3};
    cout<<maximumProduct(a);
    return 0;
}
