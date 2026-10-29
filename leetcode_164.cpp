#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumGap(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    int difference=0;
    for(int i=1;i<n;i++){
        int a=nums[i]-nums[i-1];
        if(a>difference){
            difference= a;

        }
    }
    return difference;
}
int main(){
    vector<int> a= {3,6,9,1};
    cout<<maximumGap(a);
    return 0;
}