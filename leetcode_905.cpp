#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortArrayByParity(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    vector<int> even;
    vector<int> odd;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            even.push_back(nums[i]);
        }else{
            odd.push_back(nums[i]);
        }
    }
    for(int i=0;i<even.size();i++){
        ans.push_back(even[i]);
    }
    for(int i=0;i<odd.size();i++){
        ans.push_back(odd[i]);
    }
    return ans;

}
int main(){
    vector<int> a= {3,1,2,54};
    vector<int> result= sortArrayByParity(a);
    for(int val: result){
        cout<<val<<" ";

    }
    cout<<endl;
    return 0;
}
