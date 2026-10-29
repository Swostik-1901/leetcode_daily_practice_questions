#include <iostream>
using namespace std;
string toLowerCase(string s) {
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            s[i]= tolower(s[i]);
        }
    }  
    return s;
}
int main(){
    string a= "HELOO";
    cout<<toLowerCase(a);
    return 0;
}