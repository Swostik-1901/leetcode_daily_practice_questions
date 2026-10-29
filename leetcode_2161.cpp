#include <iostream>
#include <vector>
using namespace std;
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> ans;
        for(int x: nums){
            if(x<pivot){
                ans.push_back(x);
            }
        }
        for(int x: nums){
            if(x==pivot){
                ans.push_back(x);
            }
        }
        for(int x: nums){
            if(x>pivot){
                ans.push_back(x);
            }
        }
        return ans;
    }
int main(){
    vector<int> a= {9,12,5,10,14,3,10};
    vector<int> result= pivotArray(a, 10);
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;

}