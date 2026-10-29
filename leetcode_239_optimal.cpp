#include <iostream>
#include <deque>
#include <vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector <int> res;
     //analyzing the first window
    for(int i=0;i<k;i++){
        while (dq.size()>0 && nums[dq.back()]<=nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        
    }
    for(int i=k;i<nums.size();i++){
        res.push_back(nums[dq.front()]);
        //removing the elements that are not the part of the current window
        while(dq.size()>0 && dq.front()<=i-k){
            dq.pop_front();
        }
        //removing the smaller values from the end
        while (dq.size()>0 && nums[dq.back()]<=nums[i])
        {
            dq.pop_back();
        }
        dq.push_back(i);
        
    }
    res.push_back(nums[dq.front()]);
    return res;
}
int main(){
    vector<int> nums= {3,5,6,3,2,5,6,3};
    int k=3;
    vector<int> result= maxSlidingWindow(nums, k);
    for(int val: result){
        cout<<val<<" ";

    }
    return 0;
}