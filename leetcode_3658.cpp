#include <iostream>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp= b;
        b= a%b;
        a= temp;
    }
    return a;
}
int gcdOfOddEvenSums(int n) {
    int sum_odd= 0;
    int sum_even= 0;
    for(int i= 1; i<=n*2-1;i+=2){
        sum_odd+=i;
    }
    for(int i= 2; i<=n*2;i+=2){
        sum_even+=i;
    }
    return gcd(sum_odd, sum_even);    

}
int main(){
    int n=4;
    cout<<gcdOfOddEvenSums(n);
    return 0;
}