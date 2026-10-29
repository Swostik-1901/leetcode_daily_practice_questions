#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int>& numbers, int target) {
    int n= numbers.size();
    int start= 0;
    int end= n-1;
    while (start<end)
    {
       int sum= numbers[start] + numbers[end];
       if(sum== target){
        return {start+1, end+1};
       }else if(sum<target){
        start++;
       }else{
        end--;
       }
    }
    return {-1,-1};
    
    
     
}
int main(){
    vector<int> a= {2,7,11,15};
    vector<int> result= twoSum(a,9);
    for(int val: result){
        cout<<val<<",";
    }
    return 0;
}