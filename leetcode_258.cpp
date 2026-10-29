#include <iostream>
using namespace std;
int addDigits(int num) {
    while(num>=10){
        int sum=0;
        while (num>0)
        {
            sum= sum+ num%10;
            num/=10;
        }
        num= sum;

    }
    return num;
    
}
int main(){
    int a= 38;
    cout<<addDigits(a);
    return 0;
}