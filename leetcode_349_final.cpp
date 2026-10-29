#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int n= nums1.size();
    int m= nums2.size();
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    int i=0;
    int j=0;
    set<int> intersection_array;
    while (i<n && j<m)
    {
        if(nums1[i]== nums2[j]){
            intersection_array.insert(nums1[i]);
            i++;
            j++;
        }else if(nums1[i]<nums2[j]){
            i++;
        }else{
            j++;
        }
    }
    return vector<int>(intersection_array.begin(), intersection_array.end());
 
    

}
int main(){
    vector<int> nums1= {1,2,2,1};
    vector<int> nums2= {2,2};
    vector<int> result= intersection(nums1, nums2);
    for(int val: result){
        cout<<val;
    }
    return 0;
}