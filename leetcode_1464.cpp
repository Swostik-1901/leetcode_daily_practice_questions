#include <iostream>
#include <vector>
using namespace std;
int maxProduct(vector<int>& nums) {
    int n= nums.size(); 
    int max_product= 0;
    for(int i= 0; i<n; i++){
        for(int j= i+1; j<n; j++){
            if((nums[i]-1)*(nums[j]-1)>max_product){
                max_product= (nums[i]-1)*(nums[j]-1);
            }
        }
    }
    return max_product;
}
int main(){
    vector<int> a= {3,4,5,2};
    cout<<maxProduct(a);
    return 0;
}