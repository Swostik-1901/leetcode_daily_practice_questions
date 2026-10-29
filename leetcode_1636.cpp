#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> frequencySort(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    vector<pair<int, int>>freq;
    for(int i = 0;i<n;){
        int j= i+1;
        while(j<n && nums[j]==nums[i]){
            j++;
        }
        freq.push_back({j-i, nums[i]});
        i=j;
    }
    sort(freq.begin(), freq.end(),[](pair<int, int>& a, pair<int,int>& b){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
    });
    
    vector<int> result;
    for(auto& p: freq){
        for(int k=0;k<p.first;k++){
            result.push_back(p.second);
        }
    }
    return result;
}
int main(){
    vector<int>a={1,1,2,2,2,3};
    vector<int> result= frequencySort(a);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}