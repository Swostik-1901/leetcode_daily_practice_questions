#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> get_all_subarrays(vector<int>& nums){
    vector<vector<int>> subarrays;
    int n= nums.size();
    for(int start=0;start<n;start++){
        vector<int> temp;
        for(int end=start;end<n;end++){
            temp.push_back(nums[end]);
            subarrays.push_back(temp);
        }
    }
    return subarrays;
}
int sum(vector<int>& nums){
    int n= nums.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum+= nums[i];
    }
    return sum;
}
int countRangeSum(vector<int>& nums, int lower, int upper) {
    int count=0;
    vector<vector<int>> all_subarrays= get_all_subarrays(nums);
    for(auto &p:all_subarrays){
        int sum_of_range= sum(p);
        if(sum_of_range>=lower && sum_of_range<=upper){
            count++;
        }
    }
    return count;

}
int main(){
    vector<int>a= {-2,5,-1};
    cout<<countRangeSum(a, -2,2);
    return 0;
}   