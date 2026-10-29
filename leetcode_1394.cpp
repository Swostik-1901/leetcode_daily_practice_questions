#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int findLucky(vector<int>& arr) {
    int n= arr.size();
    sort(arr.begin(), arr.end());
    
    for(int i= 0;i<n; i++){
        int count= 0;
        for(int j= 0;j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }

        }
        if(count== arr[i]){
            return arr[i];
        }

    }
    return -1;

}
int main(){
    vector<int>a= {2,2,3,4};
    cout<<findLucky(a);
    return 0;
}