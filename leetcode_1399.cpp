#include <iostream>
#include <vector>
using namespace std;
int digit_sum(int n){
    int sum= 0;
    while(n>0){
        sum+= n%10;
        n= n/10;
    }
    return sum;
}
int group_digit_sum(int n){
    vector<int> sums;
    for(int i=1; i<=n; i++){
        sums.push_back(digit_sum(i)); 
    }
    int max_sum= 0;
    for(int val: sums){
        if(val>max_sum){
            max_sum= val;
        }
    }
    vector<int> freq(max_sum+1, 0);
    for(int val:sums){
        freq[val]++;
    }
    int ans= 0;
    for(int val: freq){
        if(val>ans){
            ans= val;
        }
    }
    return ans;
}
int main(){
    
}   
