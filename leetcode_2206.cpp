#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
    bool divideArray(vector<int>& nums) {
        int n= nums.size();
        if(n%2!=0){
            return false;
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i+=2){
            for(int j=i+1;j<i+2;j++){
                if(nums[i]!=nums[j]){
                    return false;
                }
            }
        }

        return true;
    }
int main(){
    vector<int> a={3,2,3,2,2,2};
    cout<<divideArray(a);
    return 0;
}