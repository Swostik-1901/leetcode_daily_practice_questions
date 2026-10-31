#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> intersection(vector<vector<int>>& nums) {
    unordered_map<int,int> freq;
    int n= nums.size();
    for(auto &row: nums){
        unordered_set<int> seen;
        for(int x: row){
            if(seen.find(x)== seen.end()){
                freq[x]++;
                seen.insert(x);
            }
        }
    }
    vector<int> result;
    for(auto &p: freq){
        if(p.second==n){
            result.push_back(p.first);
        }
    }
    
    sort(result.begin(), result.end());
    return result;
}
int main(){
    vector<vector<int>>p= {{3,1,2,4,5},{1,2,3,4},{3,4,5,6}};
    vector<int> result= intersection(p);
    for(int val: result){
        cout<<val<<" ";

    }
    cout<<endl;

    return 0;
}