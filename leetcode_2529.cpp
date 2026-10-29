#include <iostream>
#include <vector>
using namespace std;
int maximumCount(vector<int>& nums) {
    int n= nums.size();
    int negative= 0;
    int positive= 0;
    for(int i= 0; i<n;i++){
        if(nums[i]>0){
            positive++;
        }else if(nums[i]<0){
            negative++;
        }else{
            continue;
        }
    }
    return max(positive, negative);
}
int main(){
    vector<int> a= {-2,-1,0,1,2,3};
    cout<<maximumCount(a);
    return 0;
}