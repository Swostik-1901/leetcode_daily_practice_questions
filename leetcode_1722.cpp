#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
    int n= source.size();
    int m=allowedSwaps.size();
    for(int i=0;i<m;i++){
        swap(source[allowedSwaps[i][0]],source[allowedSwaps[i][1]]);
    }
    int distance=0;
    for(int i=0;i<n;i++){
        if(source[i]!= target[i]){
            distance ++;
        }

    }
    return distance;
}
int main(){
    vector<int>source= {1,2,3,4};
    vector<int>target= {2,1,4,5};
    vector<vector<int>>allowed_swaps= {{0,1},{2,3}};
    cout<<minimumHammingDistance(source, target, allowed_swaps);
    return 0;
}
