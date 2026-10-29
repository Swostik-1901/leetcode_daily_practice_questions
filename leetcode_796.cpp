#include <iostream>
#include <string>
using namespace std;
bool rotateString(string s, string goal) {
    int n= s.size();
    int i=0;
    if(n!= goal.size()){
        return false;
    }
    for(int i=0; i<n;i++){
        char first= s[0];
        s.erase(0,1);
        s.push_back(first);
        if(s== goal){
            return true;
        }
    }
    return false;
}
int main(){
    
    cout<<rotateString("abcde", "cdeab");
    return 0;
}