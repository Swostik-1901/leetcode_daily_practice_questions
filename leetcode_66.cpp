#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int n= digits.size();    
    for(int i= n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }else{
            digits[i]=0;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
}
int main(){
    vector<int> a= {1,2,3};
    vector<int> result= plusOne(a);
    for(int val: result){
        cout<<val<<",";
    }
    cout<<endl;
    return 0;
}





