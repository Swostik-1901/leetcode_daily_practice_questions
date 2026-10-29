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
bool gcdSort(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    int i=0;int j=i+1;
    while(j!=n-1){
        if(gcd(nums[i], nums[j])<=1){
            return false;
        }
    }
    return true;
}
int main(){
    vector<int>a={7,21,3};
    cout<<gcdSort(a);
    return 0;
}