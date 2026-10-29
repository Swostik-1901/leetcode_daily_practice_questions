#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int> constructRectangle(int area) {
    vector<int> ans(2);
    int length= area;
    int breadth=1;
    int difference=area;
    int root= sqrt(area);
    if(root*root== area){
        return {root, root};
    }
    while(length>=breadth){
        int ar= length*breadth;
        
        int curr= abs(length-breadth);
        if(curr<=difference && ar== area){
            difference=curr;
            ans[0]= length;
            ans[1]= breadth; 
        }
        length--;
        breadth++;
    }
    return ans;
}
int main(){
    int area=122122;
    vector<int> result= constructRectangle(area);
    for(int val: result){
        cout<<val<<" ";
    }
    return 0;
}