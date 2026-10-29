#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxIceCream(vector<int>& costs, int coins) {
    int n= costs.size();
    sort(costs.begin(), costs.end());
    int count= 0;
    for(int p: costs){
        if (coins>= p)
        {
            coins-= p;
            count++;
        }else{
            break;
        }
        
    }
    return count;
}
int main(){
    vector<int> a= {1,3,2,4,1};
    int coins= 7;
    cout<<maxIceCream(a,coins);
    return 0;
}