#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minSetSize(vector<int>& arr) {
    int original_size= arr.size();
    int target_size= original_size/2;
    sort(arr.begin(), arr.end());
    vector<int> counts;
    for(int i=0;i<original_size;){
        int j=i+1;
        while(j<original_size && arr[j]==arr[i]){
            j++;
        }
        counts.push_back(j-i);
        i=j;
    }
    sort(counts.begin(), counts.end(), greater<int>());
    int removed=0;
    int distince= 0;
    for(int c: counts){
        removed+=c;
        distince++;
        if(removed>= target_size){
            break;
        }
        
    }
    return distince;
}
int main(){
    vector<int> a= {3,3,3,3,5,5,5,2,2,7};
    cout<<minSetSize(a);
    return 0;
}