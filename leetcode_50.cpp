#include <iostream>
using namespace std;
double myPow(double x, int n) {
    long long N=n;
    if(N<0){
        x=1/x;
        N=-N;
    }
    double exp=1;
    while(N>0){
        if(N%2==1){
            exp*=x;
        }
        x=x*x;
        N/=2;
    }
    return exp;
}
int main(){
    double c=5;
    int n=6;
    cout<<myPow(c,n);
    return 0;
}