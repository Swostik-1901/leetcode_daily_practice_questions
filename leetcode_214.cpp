#include <iostream>
#include <string>
using namespace std;
string shortestPalindrome(string s) {
    int n= s.size();
    int j=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==s[j]){
                j++;
            }
        }
    
    if(j==n){
        return s;
    }
    string suffix= s.substr(j);
    string prefix= s.substr(0,j);
    string rev= string(suffix.rbegin(), suffix.rend());
    return rev+ shortestPalindrome(prefix)+suffix;
    
}
int main(){
    string a= "abc";
    cout<<shortestPalindrome(a);
    cout<<endl;
    return 0;
}