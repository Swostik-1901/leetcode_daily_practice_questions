#include <iostream>
using namespace std;
bool isNumber(string s) {
    int n= s.size();
    int i=0;
    if(s[i]=='+' || s[i]=='-'){
        i++;
        if(i==n){
            return false; // these special characters alone cannot become a valid number;
        }
    }
    bool has_digit= false;
    bool has_decimal= false;
    bool has_exponent= false;
    for(;i<n;i++){
        if(isdigit(s[i])){
            has_digit= true;
        }else if(s[i]=='.'){
            if(has_decimal || has_exponent){
                return false;
            }
            has_decimal= true;
        }else if(s[i]=='E' || s[i]=='e'){
            if(has_exponent || !has_digit){
                return false;
            }else{
                has_exponent= true;
                has_digit= false; // there should be atleast one letter after the exponnet digit for the number to be valid;
            }
            if(i+1<n && s[i+1]=='+' || s[i+1]=='-'){
                i++;
            }
        }else {
            return false;
        }
    }
    return has_digit; // we will return only the has_digit boolean value and it will be enough for us to check whether the given number is a valid number or not because all we need is a minumum of one digit in it for it to become a valid number and the rest of the condtions will be checked so this is the first thing we need to check 
}
int main(){
    string s= "6e6.5";



    cout<<isNumber(s);
    return 0;
}