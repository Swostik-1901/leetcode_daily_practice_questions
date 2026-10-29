#include <iostream>
#include <vector>
using namespace std;
bool is_valid(vector<int>& arr){
    int n= arr.size();
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            return false;
        }
        for(int i= 2; i<n;i++){
            if((arr[i-2]<arr[i-1]&&arr[i-1]<arr[i]) || (arr[i-2]>arr[i-1]&&arr[i-1]>arr[i])){
                return false;
            }
        }
    }
    return true;
}
void back_tracking(int n, int l, int r, vector<int>& current, int& count){
    if(current.size()==n){
        if(is_valid(current)){
            count++;
        }        
        return;
    }
    for(int i=l;i<=r; i++){
        current.push_back(i);
        int a= current.size();
        bool ans= true;
        if(a>=2 && current[a-1]==current[a-2]){
            ans= false;
        }else if(a>3){
            if((current[a-3]<current[a-2] && current[a-2] < current[a-1]) || (current[a-3]>current[a-2] && current[a-2] > current[a-1])){
                ans= false;
            }
        }
        if(ans){
            back_tracking(n,l,r,current, count);
        }
        current.pop_back();
    }
}
int zigZagArrays(int n, int l, int r) {
    vector<int> ans;
    int count= 0;
    back_tracking(n,l,r,ans, count);
    return count;
    
    
}
int main(){
    int n= 3;
    int l= 1;
    int r=3;
    cout<<zigZagArrays(n,l,r);
    return 0;
}
