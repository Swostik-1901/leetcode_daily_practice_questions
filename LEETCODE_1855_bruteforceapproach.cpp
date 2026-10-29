#include <iostream>
#include <vector>
using namespace std;
int maxDistance(vector<int>& nums1, vector<int>& nums2) {
    int n= nums1.size();
    int m= nums2.size();
    int max_distance=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            if(i<=j && nums1[i]<=nums2[j]){
                max_distance= max(max_distance,j-i);
            }
        }
    }
    return max_distance;
}
int main(){
    // vector<int>nums1 = {55,30,5,4,2};
    // vector<int>nums2 = {100,20,10,10,5};
    vector<int>nums1 = {2,2,2};
    vector<int>nums2 = {10,10,1};
    cout<<maxDistance(nums1, nums2);
    return 0;
}