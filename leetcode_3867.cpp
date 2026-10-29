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
long long gcdSum(vector<int>& nums) {
   vector<int> mxi(nums.size());
   vector<int> prefix_gcd;
   mxi[0]= nums[0];
   for(int i=1; i<nums.size();i++){
    mxi[i]= max(mxi[i-1],nums[i]);
   }
   for(int i= 0; i<nums.size(); i++){
        prefix_gcd.push_back(gcd(nums[i], mxi[i]));
   }
   sort(prefix_gcd.begin(),prefix_gcd.end());
   long long sum= 0;
   int start=0;
   int end= prefix_gcd.size()-1;
   
   while (start<end)
   {
    sum+=gcd(prefix_gcd[start], prefix_gcd[end]);
    start++;
    end--;
   }
   
   return sum;

}
int main(){
    vector<int>a = {3,6,2,8};
    cout<<gcdSum(a);
    return 0;
}