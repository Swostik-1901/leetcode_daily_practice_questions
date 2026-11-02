#include <iostream>
#include <vector>
using namespace std;
int min_element(vector<int>& nums){
    int n= nums.size();
    int minimum_element= nums[0];
    for(int i=1;i<n;i++){
        if(nums[i]<minimum_element){
            minimum_element= nums[i];
        }
    }
    return minimum_element;

}
int minMoves(vector<int>& nums) {
    int me= min_element(nums);
    int moves=0;
    for(int x: nums){
        moves+= x-me;
    }
    return moves;
}
int main(){
    vector<int> a= {1,2,3};
    cout<<minMoves(a);
    return 0;
}