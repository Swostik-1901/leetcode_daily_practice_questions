#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int tupleSameProduct(vector<int>& nums) {
    unordered_map<int, int>mp;
    int n= nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[nums[i]*nums[j]]++;
        }
    } 
    int ans=0;
    for(auto &p: mp){
        int k= p.second;
        ans+=k*(k-1)/2*8;
    }    
    return ans;
}
int main(){
    vector<int> a= {2,3,4,6};
    cout<<tupleSameProduct(a);
    return 0;
}
