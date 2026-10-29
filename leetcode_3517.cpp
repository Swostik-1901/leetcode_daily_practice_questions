#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool ispalindrome(string s){
    int i=0;
    int j= s.size()-1;
    while(i<j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
string smallestPalindrome(string s) {
   vector<int> freq(26,0);
   for(char c: s){
    freq[c-'a']++;
   }
   int oddcount= 0;
   int oddchar= '\0';
   for(int i=0;i<26;i++){
        if(freq[i]%2!=0){
            oddcount++;
            if(oddchar=='\0'){
                oddchar= 'a'+i;
            }
        }
   }
   if(oddcount>1){
    return "";
   }
   string half= "";
   for(int i=0;i<26; i++){
    half.append(freq[i]/2,'a'+i);
   }
   string result= half;
   if(oddchar!='\0'){
    result+= oddchar;
   }
   reverse(half.begin(), half.end());
   result+= half;
   return result;
        
}
int main(){

}