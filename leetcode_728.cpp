#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> digits(int n){
    vector<int> all_digits;
    while(n!=0){
        all_digits.push_back(n%10);
        n=n/10;
    }
    reverse(all_digits.begin(), all_digits.end());
    return all_digits;

}
vector<int> selfDividingNumbers(int left, int right) {
    vector<int> ans;
    for(int i=left; i<= right;i++){
        vector<int> each_digits=digits(i);
        bool valid= true;
        for(int x: each_digits){
            if(x==0 || i%x!=0){
                valid= false;
                break;
            }
        }
        if(valid){
            ans.push_back(i);
        }
    }
    return ans;
}
int main(){
    int left=1;
    int right= 22;
    vector<int> result= selfDividingNumbers(left, right);
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}