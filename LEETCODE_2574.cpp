#include <iostream>
#include <vector>
using namespace std;
vector<int> leftRightDifference(vector<int>& nums) {
    vector<int>left_sum; 
    vector<int>right_sum;
    for(int i=0;i<nums.size(); i++){
        int left_element=0;
        for(int j =0; j<i; j++){
            left_element+= nums[j];
        }
        left_sum.push_back(left_element);
    } 
    for(int i=0;i<nums.size(); i++){
        int right_element=0;
        for(int j =i+1; j<nums.size(); j++){
            right_element+= nums[j];
        }
        right_sum.push_back(right_element);
    } 
    
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        ans.push_back(abs(left_sum[i]- right_sum[i]));
    }
    return ans;
}
int main(){
    vector<int> a= {10,4,8,3};
    vector<int> result= leftRightDifference(a);
    for(int val: result){
        cout<<val<<" ";

    }
    cout<<endl;
    return 0;
}