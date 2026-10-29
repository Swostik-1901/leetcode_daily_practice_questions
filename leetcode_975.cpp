#include <iostream>
#include <vector>
using namespace std;
int next_odd(vector<int>&a, int i){
    int n= a.size();
    int target= -1;
    int minval= INT_MAX;
    for(int j=i+1;j<n;j++){
        if(a[j]>= a[i]){
            if(a[j]<minval ){
                minval= a[j];
                target= j;
            }   
        }
    }
    return target;
    
}
int next_even(vector<int>&a, int i){
    int n= a.size();
    int target= -1;
    int max_val= INT_MIN;
    for(int j=i+1;j<n;j++){
        if(a[j]<= a[i]){
            if(a[j]>max_val ){
                max_val= a[j];
                target= j;
            }   
        }
    }
    return target;

}
int oddEvenJumps(vector<int>& arr) {
    int n= arr.size();
    vector<int> nextodd(n,-1);
    vector<int> nexteven(n,-1);
    for(int i=0;i<n;i++){
        nextodd[i]= next_odd(arr,i);
        nexteven[i] = next_even(arr,i);
    }
    vector<bool> odd(n, false);
    vector<bool> even(n, false);
    odd[n-1]= even[n-1]= true;
    for(int i=n-2;i>=0; i--){
        if(nextodd[i]!=-1){
            odd[i]= even[nextodd[i]];
        }
        if(nexteven[i]!=-1){
            even[i]= odd[nexteven[i]];
            
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(odd[i]){
            ans++;
        }
    }
    return ans;
}
int main(){
    vector<int>a= {10,13,12,14,15};
    cout<<oddEvenJumps(a);
    return 0;
}