#include <iostream>
#include <vector>
using namespace std;
vector<int> rotate_array(vector<int>& nums, int k){
    vector<int> rotated_array;
    k=k%nums.size();
    for(int i=nums.size()-k; i<nums.size(); i++){
        rotated_array.push_back(nums[i]);
    }
    for(int j=0; j<=nums.size()-k-1;j++){
        rotated_array.push_back(nums[j]);
    }
    return rotated_array;
}
int main(){
    vector<int> nums= {1,2,5,63,2,5};
    int k=3;
    vector<int>result=  rotate_array(nums, k);
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}