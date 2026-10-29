#include <iostream>
#include <algorithm>
using namespace std;
string removeDuplicateLetters(string s) {
    int n= s.size();
    sort(s.begin(), s.end());
    string sorted;
    for(int i=0;i<n;i++){
        if(sorted.empty() || s[i]!= sorted.back()){
            sorted.push_back(s[i]);
        }
    }    
    return sorted;
}
int main(){
    string a= "bcabc";
    cout<<removeDuplicateLetters(a);
    return 0;
}