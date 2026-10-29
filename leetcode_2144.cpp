#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int minimumCost   (vector<int>& cost) {
    int n= cost.size();
    sort(cost.begin(), cost.end());
    int  minimum_cost=0;
    for(int i= n-1 ; i>=2; i--){
        int j=i-1;
        while(j>=1){
            minimum_cost= cost[i]+cost[j]; 
            j=j-2;
        }
    }
    return minimum_cost;
    
}
int main(){
    vector<int> cost= {6,5,7,9,2,2};
    cout<<minimumCost(cost);
    return 0;
}