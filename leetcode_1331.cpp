#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> arrayRankTransform(vector<int>& arr) {
    int n= arr.size();
    vector<int> sorted= arr;
    sort(sorted.begin(), sorted.end());
    vector<int> unique_values;
    unique_values.push_back(sorted[0]);
    for(int i= 1; i<sorted.size(); i++){
        if(sorted[i]!= sorted[i-1]){
            unique_values.push_back(sorted[i]);
        }
    }
    vector<int> ans;
    for(int i= 0 ; i<n; i++){
        int pos= lower_bound(unique_values.begin(), unique_values.end(),arr[i])- unique_values.begin();
        ans.push_back(pos+1);
    }
    return ans;

}
int main(){
    vector<int> arr= {40,10,20,30};
    vector<int > result= arrayRankTransform(arr);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;

}