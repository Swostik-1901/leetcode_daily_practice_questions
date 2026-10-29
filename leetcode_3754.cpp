#include <iostream>
using namespace std;
long long sumAndMultiply(int n) {
    long long num= 0;
    while(n!=0){
        int digit= n%10;
        if(digit!=0){
            num= num*10+ digit;
        }
        n=n/10;
    }
    long long result= 0;
    while(num!=0){
        result= result*10+ num%10;
        num= num/10;
    }
    int sum=0;
    long long temp= result;
    while(temp!=0){
        sum= sum+temp%10;
        temp= temp/10;
    }
    return result*sum;
}
int main(){
    int n= 10203004;
    cout<<sumAndMultiply(n);
    return 0;
}