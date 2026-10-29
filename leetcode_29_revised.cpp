#include <iostream>
using namespace std;
int divide(int dividend, int divisor) {
    if(divisor==0){
        return INT32_MAX;
    }
    if(dividend== INT32_MIN && divisor ==-1){
        return INT32_MAX;
    }
    long a= labs((long)dividend);
    long b= labs((long)divisor);
    long ans=0;
    while(a>=b){
        long temp = b, multiple = 1;
    while(a >= (temp << 1)) {
        temp <<= 1;
        multiple <<= 1;
    }
    a -= temp;
    ans += multiple;

    }
    if((dividend<0) ^ (divisor<0)){
        ans= -ans;
    }
    return int(ans);
}
int main(){
    int dividend=-1;
    int divisor= -1;

    cout<<divide(dividend, divisor);
    return 0;

}