#include <iostream>
#include <vector>
using namespace std;
bool ismultple(const string& numstr){
    int sum= 0;
    for(char ch: numstr){
        sum+= (ch-'0');
    }
    if(sum%3==0){
        return true;
    }else{
        return false;
    }
}
string largestMultipleOfThree(vector<int>& digits) {

}
int main(){

}