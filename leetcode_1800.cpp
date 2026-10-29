#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> splitascending(vector<int>& arr){
    vector<vector<int>> result;
    if(arr.empty()){
        return result;
        
    }
    vector<int> current;
        current.push_back(arr[0]);
        for(int i=1;i<arr.size();i++){
            if(arr[i]>arr[i-1]){
                current.push_back(arr[i]);

            }else{
                result.push_back(current);
                current.clear();
                current.push_back(arr[i]);
            }
        }
        result.push_back(current);
        return result;
}
int maxAscendingSum(vector<int>& nums) {
    int max_sum=0;
    vector<vector<int>>splittedarray= splitascending(nums);
    for(auto & sub: splittedarray){
        int sum=0;
        for(int val: sub){
            sum+=val;
        }
        max_sum= max(max_sum, sum);
    }
    return max_sum;


}
int main(){
    vector<int> a= {10,20,30,5,10,50};
    cout<<maxAscendingSum(a);
    return 0;
}