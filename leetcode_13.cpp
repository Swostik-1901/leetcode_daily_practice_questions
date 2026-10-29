#include <iostream>
#include <unordered_map>
using namespace std;
int roman_to_integer(string s){
    int ans=0;
    unordered_map<char, int>value={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0; i<s.size();i++){
        if(i+1<s.size() && value[s[i]]<value[s[i+1]]){
            ans=ans-value[s[i]];
        }else{
            ans=ans+value[s[i]];
        }
    }
    return ans;
}
int main(){
    
    return 0;
    
}