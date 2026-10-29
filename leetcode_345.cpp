#include <iostream>
using namespace std;
string reverseVowels(string s) {
    
    int start= 0;
    int end= s.length()-1;
    string vowels= "aeiouAEIOU";
    while(start<end){
        while(start<end && vowels.find(s[start])== string::npos){
            start++;
        }
        while(start<end && vowels.find(s[end])== string::npos){
            end--;
        }
        swap(s[start], s[end]);
        start++;
        end--;
    }
    return s;
}
int main(){
    string s= "icecream";
    cout<<reverseVowels(s);
    return 0;
}