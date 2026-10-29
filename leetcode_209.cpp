#include <iostream>
#include <vector>
using namespace std;
int minSubArrayLen(int target, vector<int> & nums){
    int n= nums.size();
    int count=0;
    int ans= INT8_MAX;
    int sum=0;
    for(int i=0;i<n;i++){
        sum= sum+nums[i];
        while(sum>=target){
            ans= min(ans, i-count+1);
            sum = sum- nums[count];
            count++;
        }
    }
    if(ans== INT8_MAX){
        return 0;
    }else{
        return ans;
    }
    

    
}
int main(){

}