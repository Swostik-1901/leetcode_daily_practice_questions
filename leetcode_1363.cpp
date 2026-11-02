#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



string largestMultipleOfThree(vector<int>& digits) {
    sort(digits.begin(), digits.end());
    int sum=0;
    for(int d: digits){
        sum+= d;
    }
    vector<int> rem1, rem2;
    for(int i=0;i<digits.size(); i++){
        if(digits[i]%3==1){
            rem1.push_back(i);
        }else if(digits[i]%3==2){
            rem2.push_back(i);
        }

    }
    vector<bool> remove(digits.size(), false);
    if(sum%3==1){
        if(!rem1.empty()){
            remove[rem1[0]]= true;

        }else if(rem2.size()>=2){
            remove[rem2[0]]= true;
            remove[rem2[1]]= true;
        }
    }else if(sum%3==2){
        if(!rem2.empty()){
            remove[rem2[0]]= true;
        }else if(rem1.size()>=2){
            remove[rem1[0]]=true;
            remove[rem1[1]]=true;
        }
    }
    string ans="";
    for(int i= digits.size()-1; i>=0; i--){
        if(!remove[i]){
            ans+=(digits[i]+'0');
        }
    }
    if(ans.empty()){
        return "";
    }
    if(ans[0]=='0'){
        return "0";
    }
    return ans;


}
int main(){

}