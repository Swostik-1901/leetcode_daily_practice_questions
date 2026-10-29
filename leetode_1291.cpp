#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sequentialDigits(int low, int high) {
    vector<int> ans;
    for(int num= low; num<= high; num++){
        vector<int> digits;
        int temp=num;
        while(temp!=0){
            digits.push_back(temp%10);
            temp/=10;
        }
        reverse(digits.begin(), digits.end());
        
        vector<int> sorted= digits;
        sort(sorted.begin(), sorted.end());
        if(sorted==digits){
            bool is_sequential= true;
            for(int i= 1; i<digits.size(); i++){
                if(digits[i]!=digits[i-1]+1){
                    is_sequential= false;
                }
            }
            if(is_sequential){
                ans.push_back(num);
            }
        }
    }
    return ans;
}
int main(){
    int low= 100;
    int high= 300;
    vector<int> result= sequentialDigits(low, high);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}