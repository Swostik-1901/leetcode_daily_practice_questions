#include <iostream>
#include <vector>
using namespace std;
int kthFactor(int n, int k) {
    vector<int> ans;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            ans.push_back(i);
        }
    }
    return ans[k-1];
}
int main(){
    int n= 12;
    int k= 3;
    cout<<kthFactor(n,k);
    return 0;
}