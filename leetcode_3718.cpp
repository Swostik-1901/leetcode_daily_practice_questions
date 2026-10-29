#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int missingMultiple(vector<int>& nums, int k) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    vector<int> multiples;
    for(int i=1;i<n;i++){
        multiples.push_back(i*2);
    }
    bool found= false;
    int i=0;
    int j=0;
    while(i<multiples.size() && j<nums.size()){
        if(multiples[i]== nums[j]){
            found= true;
        }else{
            j++;
        }
        if(!found){
            return multiples[i];
        }
    }
}
int main(){
    vector<int> a= {8,2,3,4,6};
    int k= 2;
    cout<<missingMultiple(a,k);
    return 0;
}