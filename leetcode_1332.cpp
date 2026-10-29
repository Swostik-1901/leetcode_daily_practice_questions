#include <iostream>
using namespace std;
bool ispalindrom(string s){
    int n= s.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
            i++;
            j--;
        }
        return true;
    }
}
int removePalindromeSub(string s) {
    if(s.empty()){
        return 0;
    }else if(ispalindrom(s)){
        return 1;
    }else{
        return 2;
    }
    
    
}
int main(){
    string s= "aabbaa";
    cout<<removePalindromeSub(s);
    return 0;
}