#include <iostream>
#include <vector>
#include <string>
using namespace std;
int numOfStrings(vector<string>& patterns, string word) {
    int n= patterns.size();
    int count=0;
    for(int i= 0; i<n; i++){
        int sz= patterns[i].size();
        int a=0;
        int b= a+sz;
        while(b<=(int)word.size()){
            string substr= word.substr(a,sz);
            if(substr== patterns[i]){
                count++;
                break;
            }
            a++;
            b++;
        }
    }
    return count;
}
int main(){
    vector<string> patterns= {"a","abc","bc","d"};
    string word= "abc";
    cout<<numOfStrings(patterns, word);
    return 0;
}