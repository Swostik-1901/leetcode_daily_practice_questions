#include <iostream>
#include <vector>
using namespace std;
bool find132pattern(vector<int>& nums) {
    int n= nums.size();
    if(n<3){
        return false;
    }

    vector<int> minprefix(n);
    minprefix[0]= nums[0];
    for(int i=1;i<n;i++){
        minprefix[i]= min(minprefix[i-1], nums[i]);
    }

    for(int j=n-1;j>=0;j--){
        if(nums[j]>minprefix[j]){
            for(int k=j+1;k<n;k++){
                if(nums[k]>minprefix[j] && nums[k]<nums[j]){
                    return true;
                }
            }
        }
    }
    return false;
}
int main(){
    vector<int> a= {1,2,3,4};
    cout<<find132pattern(a);
    return 0;
}   