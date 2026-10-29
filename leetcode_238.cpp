#include <iostream>
#include <vector>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
    int n= nums.size();
    vector<int> ans;
    int num=0;
    int product=1;
    for(int i=0;i<num;i++){
        product=product*nums[i]; //left product
    }
    for(int i=num+1;i<n;i++){
        product= product*nums[i];
    }
}
int main(){
    vector<int> nums= {1,2,3,4};
    vector<int> result= productExceptSelf(nums);
    for(int ans: result){
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}