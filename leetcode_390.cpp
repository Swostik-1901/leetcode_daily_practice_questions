#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int lastRemaining(int n) {
    vector<int> arr;
    for(int i=1;i<n+1;i++){
        arr.push_back(i);
    } 
    while(arr.size()>1){
        vector<int> temp;
        for(int i= 0; i<arr.size(); i+=2){
            temp.push_back(arr[i]);
        }
        arr= temp;
        if(arr.size()==1){
            break;
        }
        temp.clear();
        for(int i= arr.size()-1; i>=0; i-=2){
            temp.push_back(arr[i]);
        }
        reverse(temp.begin(), temp.end());
        arr= temp;
        
        
    }
    return arr[0];
}
int main(){
    int n= 9;
    cout<<lastRemaining(n);
    return 0;
}