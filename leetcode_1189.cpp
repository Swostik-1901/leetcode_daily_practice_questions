#include <iostream>
#include <vector>
using namespace std;
int maxNumberOfBalloons(string text) {
    vector<int> freq(5,0);
    for(int i=0;i<text.size(); i++){
        if(text[i]=='b'){
            freq[0]++;
        }else if(text[i]=='a'){
            freq[1]++;
        }else if(text[i]=='l'){
            freq[2]++;
        }else if(text[i]=='o'){
            freq[3]++;
        }else if(text[i]=='n'){
            freq[4]++;
        }
    }
    freq[2]/=2;
    freq[3]/=2;
    int ans=INT_MAX;
    for(int val: freq){
        ans= min(ans, val);
    }
    return ans;
}
int main(){
    string text="balloonballoon";
    cout<<maxNumberOfBalloons(text);
    return 0;
}