#include <iostream>
#include <vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double n= nums1.size();
    double m= nums2.size();
    vector<int> merged;
    int i=0;
    int j=0;
    while (i<n && j<m)
    {
        if(nums1[i]<nums2[j]){
            merged.push_back(nums1[i]);
            i++;
        }else{
            merged.push_back(nums2[j]);
            j++;
        }
    }
    while (i<n)
    {
        merged.push_back(nums1[i]);
        i++;
    }
    while (j<m)
    {
        merged.push_back(nums2[j]);
        j++;
    }
    
    
    int s= merged.size();
    if(s%2==0){
        return (merged[s/2 - 1] + merged[s/2]) / 2.0;
    }else{
        return merged[s/2];
    }
}
int main(){
    vector<int> nums1={1,3};
    vector<int> nums2={2};
    cout<<findMedianSortedArrays(nums1, nums2);
    return 0;
}