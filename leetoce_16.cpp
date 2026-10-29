#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        int n= nums.size();
        int closest= nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int sum= nums[i]+nums[j]+nums[k];
                    if(abs(target-closest)>abs(target-sum)){
                        closest= sum;
                        
                    }
                }
            }

        }
        return closest;
}
int main(){
    vector <int> nums= {0,0,0};
    int target= 1;
    cout<<threeSumClosest(nums, target);
    return 0;
}