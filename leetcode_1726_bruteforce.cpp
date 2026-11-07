#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
bool condition(vector<int>& nums){
    int a=nums[0];
    int b=nums[1];
    int c=nums[2];
    int d= nums[3];
    if(a!=b && b!=c && c!=d && a*b==c*d){
        return true;
    }
    return false;
}
vector<vector<int>> get_subarray_with_distinctelements(vector<int>& nums){
    vector<vector<int>> all_possible_combinations;
    int n= nums.size();
    for(int start=0;start+3<n;start++){
        vector<int> subarray;
        for(int i= start; i<start+4;i++){
            subarray.push_back(nums[i]);
        }
        sort(subarray.begin(), subarray.end());
        do{
            all_possible_combinations.push_back(subarray);
        }while (next_permutation(subarray.begin(), subarray.end()));
        
        
    }
    return all_possible_combinations;

}
int tupleSameProduct(vector<int>& nums) {
    vector<vector<int>> all_subarrays= get_subarray_with_distinctelements(nums);
    int count=0;
    for(auto &p: all_subarrays){
        if(condition(p)){
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