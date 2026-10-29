#include <iostream>
using namespace std;
int tribonacci(int n) {
    if(n==0){
        return 0;
    }else if(n==1 || n==2){
        return 1;
    }
    int a=0;
    int b=1;
    int c=1;
    int next_term=0;
    for(int i=3; i<=n;i++){
        next_term= a+b+c;
        a=b;
        b=c;
        c=next_term;
    }
    return c;
}
int main(){
    int n=4;
    cout<<tribonacci(n);
    return 0;
}