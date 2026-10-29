
#include <iostream>
#include <vector>
using namespace std;
int maximum69Number (int num) {
    vector<int> digits;
    int temp=num;
    while(temp!=0){
        digits.push_back(temp%10);
        temp/=10;
    }
    
    for(int j=digits.size()-1;j>=0; j--){
        if(digits[j]==6){
            digits[j]=9;
            break;
        }
    }  
    int ans= 0;
    for(int i = digits.size()-1; i >= 0; i--){
            ans = ans * 10 + digits[i];
        }

    return ans;

}
int main(){
    int n= 9969;
    cout<<maximum69Number(n);
    return 0;
}
