#include <iostream>
using namespace std;
int divide(int dividend, int divisor) {
    int ans=0;
    int sum=0;
    if(divisor==0){
        return INT8_MAX;
    }
    while(sum+ divisor<=dividend){
        sum+=divisor;
        ans++;
    }
    if(dividend<=0 || divisor<=0){
        if(divisor==0){
            return false;
        }
        if((dividend<0 && divisor>0) || (dividend>0 && divisor<0)){
            return -ans;
        }
    }
    return ans;
}
int main(){
    int a=10;
    int b=-3;
    cout<<divide(a,b);
    return 0;

}