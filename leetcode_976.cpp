#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
bool traingle_possible(int a, int b, int c){
    if(a+b>c && a+c>b && b+c>a){
        return true;
    }else{
        return false;   
    }
}

int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for(int i= nums.size()-1; i>=2; i--){
        int a= nums[i];
        int b= nums[i-1];
        int c= nums[i-2];
        if(traingle_possible(a,b,c)){
            return a+b+c;
        }
    }
    return 0;
}
int main(){
    vector<int> nums= {2,1,2};
    cout<<largestPerimeter(nums);
    return 0;
}