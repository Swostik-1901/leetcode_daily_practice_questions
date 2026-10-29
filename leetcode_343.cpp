#include <iostream>
using namespace std;
int integerBreak(int n) {
    
    if(n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    int product= 1;
    while(n>4){
        product*=3;
        n=n-3;
    }
    product= product*n;
    return product;
}
int main(){
    int n=10;
    cout<<integerBreak(n);
    return 0;
}