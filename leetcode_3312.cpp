#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp= b;
        b=a%b;
        a= temp;

    }
    return a;
}
vector<int> gcdValues(vector<int>& nums, vector<int>& queries) {
    int n= nums.size();
    vector<int> gcds;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            gcds.push_back(gcd(nums[i], nums[j]));
        }

    }
    vector<int> ans;
    sort(gcds.begin(), gcds.end());
    for(int q: queries){
        ans.push_back(gcds[q]);
    }
    return ans;


}
int main(){
    vector<int> nums={2,3,4};
    vector<int> queries={2,3,4};
    vector<int> result= gcdValues(nums, queries);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}