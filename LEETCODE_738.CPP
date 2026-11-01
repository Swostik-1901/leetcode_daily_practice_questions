#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool ismonotone(int n){
    int prev= 10;
    while (n>0)
    {
        int digit=n%10;
        if(digit>prev){
            return false;
        }
        prev= digit;
        n/=10;
    }
    return true;
    
}
int monotoneIncreasingDigits(int n) {
    for(int i=n;i>=0;i--){
        if(ismonotone(i)){
            return i;
        }
    }
    return 0;

}
int main(){
    int n=332;
    cout<<monotoneIncreasingDigits(n);
    cout<<endl;
    return 0;
}