#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>sorted_array(vector<int>& nums){
    vector<int> temp= nums;
    int n= temp.size();
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(temp[j]< temp[min_index]){
                min_index=j;
            }
        }
        swap(temp[i], temp[min_index]);
    }
    return temp;
}
int heightChecker(vector<int>& heights) {
    int count=0;
    int n= heights.size();
    vector<int> sorted= sorted_array(heights);
    for(int i=0;i<n;i++){
        if(sorted[i]!=heights[i]){
            count++;
        }
    }
    return count;

}
int main(){
    vector<int> heights= {5,1,2,3,4};
    cout<<heightChecker(heights);
    return 0;
}