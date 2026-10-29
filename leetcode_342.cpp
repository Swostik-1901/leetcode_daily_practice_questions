#include <iostream>
using namespace std;
bool isPowerOfFour(int n) {
    if(n<1){
        return false;

    }
    while(n%4==0){
        n=n/4;
    }    
    return n==1;
}
int main(){
    int n=16;
    cout<<isPowerOfFour(n);
    return 0;
}