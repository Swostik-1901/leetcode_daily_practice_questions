#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp= b;
        b= a%b;
        a= temp;

    }
    return a;
}
int gcd_of_vector(const vector<int>& arr){
    if(arr.empty()){
        return 0;
    }
    int g= arr[0];
    for(int i=1; i<arr.size(); i++){
        g= gcd(g, arr[i]);
    }
    return g;
}
int subsequencePairCount(vector<int>& nums) {
    int n= nums.size();
    long long count= 0;
    long long total_ways=1;
    for(int i=0;i<n;i++){
        total_ways= total_ways*3;
    }
    for(long long mask= 0; mask<total_ways; mask++){
        vector<int> s1;
        vector<int> s2;
        long long temp= mask;
        for(int i=0; i<n;i++){
            int choice= temp%3;
            temp= temp/3;
            if(choice==0){
                s1.push_back(nums[i]);
            }else if(choice==1){
                s2.push_back(nums[i]);

            }
            
        }
        if(!s1.empty() && !s2.empty()){
                int g1= gcd_of_vector(s1);
                int g2= gcd_of_vector(s2);
                if(g1==g2){
                    count++;
                }
            }
    }
    return count%1000000007;
}
int main(){
    vector<int>a= {1,2,3,4};
    cout<<subsequencePairCount(a);
    return 0;
}