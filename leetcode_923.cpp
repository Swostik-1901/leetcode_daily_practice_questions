#include <iostream>
#include <vector>
using namespace std;
int threeSumMulti(vector<int>& arr, int target) {
    int n=arr.size();
    int count=0;
    int i=0;
    int j=i+1;
    int k= j+1;
    while(i<j && j<k && k<n){
        if(arr[i]+arr[j]+arr[k]== target){
            count++;
        }
        i++;
        j++;
        k++;
    }
    return count;
}
int main(){
    vector<int> a= {1,1,2,2,3,3,4,4,5,5};
    cout<<threeSumMulti(a,8);
    return 0;
}