#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> sortedSquares(vector<int>& nums) {
    int n= nums.size();
    vector<int> ans;
    for(int i=0;i <n;i++ ){
        ans.push_back(nums[i]*nums[i]);
    } 
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int>a= {-4,-1,0,3,10};
    vector<int> result= sortedSquares(a);
    for(int val: result){
        cout<<val<<",";

    }
    cout<<endl;
    return 0;
}