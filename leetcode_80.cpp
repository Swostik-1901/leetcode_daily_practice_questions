#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        int k=2;
        if(nums.size()<=2){
            return nums.size();
        }
        for(int i=2; i<n;i++){
            if(nums[i]!= nums[k-2]){
                nums[k]= nums[i];
                k++;
            }

            
            
        }
        return k;

}
int main(){
    vector<int> nums= {1,1,1,2,2,3};
    cout<<removeDuplicates(nums);
    return 0;

}