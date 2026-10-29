#include <iostream>
using namespace std;
bool isPerfectSquare(int num) {
    long begin= 1;
    long end= num;
    while(begin<=end){
        long mid= begin+(end-begin)/2;
        long sqaure= mid*mid;
        if(num== sqaure){
            return true;
        }else if(sqaure>num){
            end= mid-1;
        }else{
            begin=mid+1;
        }
    }
    return false;
    
}
int main(){
    int n= 5632;
    cout<<isPerfectSquare(n);
    return 0;
}