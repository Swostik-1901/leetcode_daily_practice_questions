#include <iostream>
using namespace std;
int countNumbersWithUniqueDigits(int n) {
    if(n==0){
        return 1;
    }
    int ans=10;
    int unique_digits= 9;
    int available= 9;
    for(int i=2;i<=n;i++){
        unique_digits= unique_digits*available;
        ans= ans+unique_digits;
        available--;
    }
    return ans;
}
int main(){
    int n=2;
    cout<<countNumbersWithUniqueDigits(n);
    return 0;
}