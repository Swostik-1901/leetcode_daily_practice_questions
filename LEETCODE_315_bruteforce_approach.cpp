#include <iostream>
#include <vector>
using namespace std;

vector<int> countSmaller(vector<int>& nums) {
    if(nums.empty()){
        return {};
    }
    vector<int> counts;
    int n= nums.size();
    for(int i=0;i<n-1;i++){
        int count=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                count++;
            }
        }
        counts.push_back(count);
    }
    counts.push_back(0);
    return counts;

}
int main(){
    vector<int> nums={-1,-1};
    vector<int> result= countSmaller(nums);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}