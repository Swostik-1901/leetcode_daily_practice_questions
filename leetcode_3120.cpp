#include <iostream>
#include <vector>
using namespace std;
int numberOfSpecialChars(string word){
    int lower= 0;
    int upper= 0;
    for(char ch: word){
        if(islower(ch)){
            lower|= (1<<(ch-'a')); //bitwise OR operator
        }else{
            upper |= (1<<(ch-'A'));
    }
    }
    int common= lower & upper;
    vector<int> c_index;
    vector<int> C_index;
    for(int i=0; i<word.length(); i++){
        if(word[i]=='c'){
            c_index.push_back(i);            
        }
    }
    for(int i=0; i<word.length(); i++){
        if(word[i]=='C'){
            C_index.push_back(i);            
        }
    }
    for(int i= 0;i<c_index.size(); i++){
        for(int j= 0;j<C_index.size(); j++){
            if(c_index[i]>C_index[j]){
                return -1;
            }
        }

    }
}
int main(){
    string a= "abcABC";
    cout<<numberOfSpecialChars(a);
    return 0;
}