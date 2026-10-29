#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>& nums,  int left, int mid, int right){
    vector<int> temp;
    int i=left;
    int j= mid+1;
    while(i<= mid && j<= right){
        if(nums[i]<= nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while (i<=mid)
    {
        temp.push_back(nums[i]);
        i++;
    }
    while (j<= right)
    {
        temp.push_back(nums[j]);
        j++;
    }
    for(int k= left; k<= right; k++){
        nums[k]= temp[k-left];
    }
    
    
}
void merge_sort(vector<int>& nums, int left, int right){
    if(left>=right){
        return;
    }
    int mid= left+(right-left)/2;
    merge_sort(nums, left, mid);
    merge_sort(nums, mid+1, right);
    merge(nums, left, mid, right);
}
vector<int> sortArray(vector<int>& nums){
    merge_sort(nums,0, nums.size()-1);
    return nums;
}
int main(){
    vector<int> a={5,2,3,1};
    vector<int> result= sortArray(a);
    for(int val: result){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}