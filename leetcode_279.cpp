#include <iostream>
#include <cmath>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
bool issquare(int n){
    if(n<0){
        return false;
    }
    for(int i=0;i*i<=n;i++){
        if(i*i==n){
            return true;
        }
    }
    return false;
}
vector<int> collect_perfect_squares(int n){
    vector<int> perfect_squares;
    for(int i=1;i<n;i++){
        if(issquare(i)){
            perfect_squares.push_back(i);
        }
    }
    return perfect_squares;
}
int numSquares(int n) {
    if(issquare(n)){
        return 1;
    }
    vector<int> perfect_squares= collect_perfect_squares(n);
    vector<int> dp(n+1,n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        for(int x: perfect_squares){
            if(x<=i){
                dp[i]= min(dp[i], 1+dp[i-x]);
            }
        }
    }
    return dp[n];
}
int main(){
    int n=13;
    cout<<numSquares(n);
    return 0;
}