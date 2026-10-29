#include <iostream>
#include <vector>
using namespace std;
char next_greatest_letter(vector<char>& letters, char target){
    int n= letters.size();
    if(n==2){
        return letters[0];
    }else{
        vector<char> greater;
        for(int i=0;i<n-1;i++){
            if(target<letters[i]){
                greater.push_back(letters[i]);
            }
        }

        return greater[0];
    }
}
int main(){
    vector<char> a={'c','j','z'};
    int targer='a';
    cout<<next_greatest_letter(a, targer);
    return 0;
    
}