#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
int findLucky(vector<int>& arr){
    unordered_map<int, int> freq;
    for(int num: arr){
        freq[num]++;
    }
    int ans= -1;
    for(auto &p: freq){
        if(p.first== p.second){
            ans= max(ans, p.first);
        }
    }
    return ans;
}
int main(){
    vector<int> a= {2,2,3,3,3,4};
    cout<<findLucky(a);
    return 0;
}