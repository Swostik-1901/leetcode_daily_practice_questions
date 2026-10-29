#include<iostream>
#include<vector>
using namespace std;
int maxDistance(vector<int>& colors) {
    int n= colors.size();
    int max_distance=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(colors[i]!=colors[j]){
                max_distance=max(max_distance, (j-i));
            }
        }
    }
    return max_distance;
}
int main(){
    vector<int> colors = {1,8,3,8,3};
    cout<<maxDistance(colors);
    return 0;

}