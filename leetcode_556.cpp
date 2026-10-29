#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int nextGreaterElement(int n) {
    vector <int> digits;
    int temp= n;
    while(temp>0){
        digits.push_back(temp%10);
        temp/=10;
    }
    reverse(digits.begin(), digits.end());
    if(next_permutation(digits.begin(), digits.end())){
        long long result= 0;
        for(int d: digits){
            result= result*10+d;
        }
        if(result <= INT_FAST32_MAX){
            return (int)result;
        }else{
            return -1;
        }
    }
    return -1;
}
int main(){
}