#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int largestRectangleArea(vector<int>& heights) {
    int n= heights.size();
    vector<int>left(n,0); // this is for the left smaller nearest
    vector<int>right(n,0); // this is for the right smaller nearest
    stack<int> s;
    //for right smaller nearest
    for(int i=n-1;i>=0;i--){
        while(s.size()>0 && heights[s.top()]>= heights[i]){
            s.pop();
        }
        right[i]= s.empty()? n: s.top();
        s.push(i);
    }
    while (!s.empty()) //this is for emptying the stack if in case any element is left in the stack after complete the task of getting the right smaller nearest and then moving in for the left task
    {
        s.pop();
    }
        
    //for left smaller nearest
    for(int i=0;i<n;i++){
        while(s.size()>0 && heights[s.top()]>= heights[i]){
            s.pop();
        }
        left[i]= s.empty()? -1: s.top();
        s.push(i);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        int width= right[i]-left[i]-1;
        int current_area= heights[i]*width;
        ans= max(ans, current_area);
    }
    return ans;
}
int main(){
    vector<int> height={2,5,4,6,3,2};
    cout<<largestRectangleArea(height);
    return 0;

}


