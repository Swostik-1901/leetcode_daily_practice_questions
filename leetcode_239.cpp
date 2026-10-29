#include <iostream>
#include <vector>
using namespace std;
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    vector<int> ans;
    for(int i=0;i<=nums.size()-k;i++){
        vector<int> curr_elements;
        for(int j=i;j<i+k;j++){
            curr_elements.push_back(nums[j]);
        }
        int max= curr_elements[0];
        for(int j=0;j<curr_elements.size();j++){
            if(curr_elements[j]>max){
                max= curr_elements[j];
            }
        }
        ans.push_back(max);
    }
    return ans;

}
int main(){
    vector<int> a={1,2,36,5,4,5,2};
    int k=3;
    vector<int>result= maxSlidingWindow(a,k);
    for(int val: result){
        cout<<val;
    }
    return 0;
}