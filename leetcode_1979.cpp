#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int gcd(int a, int b){
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a= temp;
    }
    return a;
    
}
int findGCD(vector<int>& nums) {
    int n= nums.size();
    sort(nums.begin(), nums.end());
    return gcd(nums[0], nums[n-1]);
}
int main(){
    vector<int> a= {2,5,6,9,10};
    cout<<findGCD(a);
    return 0;
}