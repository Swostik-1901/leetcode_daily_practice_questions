#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    bool isfeasible(vector<int>& nums, int maxsum, int k){
    int count=1;
    int currentsum=0;
    for(int num: nums){
        currentsum+= num;
        if(currentsum>maxsum){
            count++;
            currentsum= num;
            if(count>k){
                return false;
            }
        }
    }
    return true;
}
int splitArray(vector<int>& nums, int k) {
    int low=0;
    int high=0;
    for(int num: nums){
        low= max(low,num);
        high+= num;
    }
    int ans= high;
    while(low<= high){
        int mid= low+(high-low)/2;
        if(isfeasible(nums, mid, k)){
            ans= mid;
            high=mid-1;
        }else{
            low= mid+1;
        }
    }
    return ans;
}

};
int main(){
    
}