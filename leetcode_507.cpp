#include <iostream>
#include <vector>
using namespace std;
bool checkPerfectNumber(int num) {
    vector<int> factors;
    for(int i=1;i<=num/2; i++){
        if(num%i==0){
            factors.push_back(i);
        }
    }
    int sum= 0;
    for(int val: factors){
        sum+= val;
    }
    if(sum== num){
        return true;
    }else{
        return false;
    }
}
int main(){
    int num=28;
    cout<<checkPerfectNumber(num);
    return 0;
}