#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool same_product(vector<int>& nums){
    if(nums.size()>4 || nums.size()<4){
        return false;
    }else{
        if(nums[0]*nums[1]== nums[2]*nums[3]){
            return true;
        }
    }
    return false;
    
}
vector<vector<int>> get_subarray_with_distinctelements(vector<int>& nums){
    vector<vector<int>> subarrays;
    int n= nums.size();
    for(int i=0;i<n;i++){
        set<int> distinct;
        vector<int> subarray;
        for(int j=i;j<n;j++){
            subarray.push_back(nums[j]);
            distinct.insert(nums[j]);
            if(distinct.size()==4){
                subarrays.push_back(subarray);
            }else if(distinct.size()>4){
                break;
            }
        }
    }
    return subarrays;

}
int tupleSameProduct(vector<int>& nums) {
    int n= nums.size();
    int count=0;
    vector<vector<int>>all_subarrays= get_subarray_with_distinctelements(nums);
    for(auto &p: all_subarrays){
        if(same_product(p)){
            count++;
        }
    }    
    return count;
}
int main(){
    vector<int> nums= {2,3,4,6};
    cout<<tupleSameProduct(nums);
    return 0;
}   