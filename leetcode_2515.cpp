#include <iostream>
#include <vector>
#include <string>
using namespace std;
int closestTarget(vector<string>& words, string target, int startIndex) {
    int n= words.size();
    // int ans=n;
    for(int i=0;i<n;i++){
        int forward=(startIndex+i)%n;
        int backward=(startIndex-i+n)%n;
        if(words[forward]== target || words[backward]==target){
            return i;
        }
    }
    return -1;

    
}
int main(){
    vector<string> words= {"hello","i","am","leetcode","hello"};
    string target="hello";
    int start= 1;
    cout<<closestTarget(words, target,start);
    return 0;
}