#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> next_greater(2*n);
        vector<int> ans(n,-1);

        // stack<int> s;
        for(int i=0;i<next_greater.size();i++){
            next_greater[i]= nums[i%n];
        }
        // return next_greater;
        for(int i= 0;i<n;i++){
            for(int j=i+1;j<next_greater.size();j++){
                if(nums[i]<next_greater[j]){
                    ans[i]=next_greater[j];
                    break;
                }
            }
        }
        return ans;

    }
int main(){
    vector<int>a={1,2,3,4};
    vector<int> res= nextGreaterElements(a);
    for(int val: res){
        cout<<val;
    }
    return 0;
}


