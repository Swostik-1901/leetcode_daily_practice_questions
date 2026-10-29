#include <iostream>
#include <vector>
#include <numeric>
using namespace std;
vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
    int sum_alice=accumulate(aliceSizes.begin(), aliceSizes.end(),0); //the accumulate property of the array calculates the sum of all the elents of this array
    // and the siginificance of 0 here is that we are initializing the sum of the elements of the array from 0
    int sum_bob=accumulate(bobSizes.begin(), bobSizes.end(),0);
    int difference= (sum_alice-sum_bob)/2;
    for(int a: aliceSizes){
        for(int b: bobSizes){
            if(a-b== difference){
                return {a,b};
            }
        }
    } 
    return {};

    
}
int main(){
    vector<int> a= {1,1};
    vector<int> b= {2,2};
    vector<int> result= fairCandySwap(a,b);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}