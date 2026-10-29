#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
string getPermutation(int n, int k) {
    vector<int> nums;
    vector<string> perms;
    for(int i=1; i<=n; i++){
        nums.push_back(i);
    }
    int perm_num=0;
    for(int val: nums){
        perm_num= perm_num*10+val;
    }
    string num= to_string(perm_num);
    perms.push_back(num);
    while (next_permutation(num.begin(), num.end()))
    {
        perms.push_back(num);
    }
    return perms[k-1];


    
}
int main(){
    int n=3;
    int k=3;
    cout<<getPermutation(n,k);
    return 0;
}