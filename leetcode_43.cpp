#include <iostream>
#include <vector>
using namespace std;
string multiply(string num1, string num2) {
    if(num1[0]=='0' || num2[0]=='0'){
        return "0";
    }
    vector<int> num(num1.size()+num2.size(),0);
    for(int i=num1.size()-1;i>=0;i--){
        for(int j=num2.size()-1;j>=0;j--){
            num[i+j+1]+= (num1[i]-'0')*(num2[j]-'0');
            num[i+j]+=num[i+j+1]/10;
            num[i+j+1]%=10;
        }

    }
    int i=0;
    while(num[i]==0){
        i++;
    }
    string ans= "";
    while (i<num.size())
    {
        ans.push_back(num[i]+'0');
        i++;
    }
    return ans;
    
}
int main(){
    string num1 = "2";
    string num2 = "3";
    cout<<multiply(num1, num2);
    return 0;
}