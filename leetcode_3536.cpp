#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProduct(int n) {
    vector<int> digits;
    while(n!=0){
        digits.push_back(n%10);
        n=n/10;
    }
    sort(digits.begin(), digits.end());
    int a= digits.size();
    return digits[a-1]* digits[a-2]; 
}
int main(){
    int n= 124;
    cout<<maxProduct(n);
    return 0;
}