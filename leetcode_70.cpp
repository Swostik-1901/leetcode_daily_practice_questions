#include <iostream>
using namespace std;
int climbStairs(int n){
    if(n<=3){
        return n; // this handles the base cases for the steps less than or equal to 3;
    }
    int prev1=3;
    int prev2=2;
    int curr=0;
    for(int i=3;i<n;i++){
        curr= prev1+prev2;
        prev2= prev1;
        prev1= curr;
    }
    return curr;
}
int main(){
    int n=5;
    cout<<climbStairs(n);
    return 0;
}