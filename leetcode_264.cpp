#include <iostream>
#include <vector>
using namespace std;
bool is_ugly(int n){
    if(n<=0){
        return false;
    }
    while(n%2==0){
        n=n/2;
        
    }
    while(n%3==0){
        n=n/3;
        
    }
    while(n%5==0){
        n=n/5;
    }
    return n==1;
}
int nthUglyNumber(int n) {
    vector<int> uglies;
    int count= 0;
    int num=1;
    while (count<n){
        if(is_ugly(num)){
            uglies.push_back(num);
            count++;
        }
        num++;
    }
    
    return uglies.back();
    
    
}
int main(){
    int n=10;
    cout<<nthUglyNumber(n);
    return 0;
} 