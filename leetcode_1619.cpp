#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double trimMean(vector<int>& arr) {
    int n= arr.size();
    int deleting= 0.05*n;
    sort(arr.begin(), arr.end());
    int sum=0;
    for(int i= deleting; i<n-deleting; i++){
        sum+= arr[i];
    }
    double mean= static_cast<double>(sum)/(n-2*deleting);
    return mean ;

}
int main(){
    vector<int> a={1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3};
    cout<<trimMean(a);
    return 0;
}