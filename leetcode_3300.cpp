#include <iostream>
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
int minElement(vector<int>& nums) {
    int n= nums.size();
    int min_val=INT8_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        int temp= nums[i];
        while(temp!=0){
            sum= sum+temp%10;
            temp= temp/10;
        }
        min_val= min(min_val, sum);

    }  
    return min_val;
}
int main(){
    vector<int> a= {10,12,13,14};
    cout<<minElement(a);
    return 0;
}