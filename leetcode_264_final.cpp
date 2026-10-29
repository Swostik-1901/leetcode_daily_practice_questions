#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int nthUglyNumber(int n){
    if(n<=0){
        return 0;
    }
    vector<int> ugly(n);
    ugly[0]=1;
    int p2=0;
    int p3=0;
    int p5=0;
    for(int i=1; i<n;i++){
        int next2= ugly[p2]*2;
        int next3= ugly[p3]*3;
        int next5= ugly[p5]*5;
        int next= min({next2, next3, next5});
        ugly[i]= next;
        if(next==next2){
            p2++;
        }
        if(next==next3){
            p3++;
        }
        if(next==next5){
            p5++;
        }
    }
    return ugly[n-1];
}
int main(){
    int n=10;
    cout<<nthUglyNumber(n);
    return 0;
}