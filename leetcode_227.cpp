#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
void backtrack(const string& digits, int idx, string comb, vector<string>& res, const unordered_map<char, string>& digit_to_letters){
    if(idx== digits.size()){
        res.push_back(comb);
        return ;
    }
    string letters= digit_to_letters.at(digits[idx]);
    for(char letter: letters){
        backtrack(digits, idx+1, comb+letter,res, digit_to_letters);
    }
}
vector<string> letter_combinations(string digits){
    vector<string> res;
    if(digits.empty()){
        return res;
    }
    unordered_map<char, string> digits_to_letters={
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
    backtrack(digits, 0, "", res, digits_to_letters);
    return res;   
}
int main(){
    string digits= "23";
    vector<string> result= letter_combinations(digits);
    for(string val: result){
        cout<<val<<" ";
    }
    return 0;
}