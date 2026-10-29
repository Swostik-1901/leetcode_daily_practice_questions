#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> intersection;
    for(int i=0;i<nums1.size();i++){
        for(int j=0;j<nums2.size();j++){
            if(nums1[i]==nums2[j]){
                intersection.push_back(nums2[j]);
            }
        }
    }  
    return intersection;
}
int main(){
    vector<int> nums1={1,2,2,1};

    vector<int> nums2={2,2};
    vector<int> result= intersection(nums1, nums2);
    for(int val: result){
        cout<<val;
    }
    return 0;
}