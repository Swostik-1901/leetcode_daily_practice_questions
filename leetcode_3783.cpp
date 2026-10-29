#include <iostream>
using namespace std;
int mirrorDistance(int n) {
    int reversed= 0;
    int original= n;
    while(n!=0){
        int digit= n%10;
        reversed= reversed*10+digit;
        n=n/10;
    }
    int mirror_distance= abs(original-reversed);
    return mirror_distance;
}
int main(){
    int n= 25;
    cout<<mirrorDistance(n);
    return 0;
}