#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
double average(vector<int>& salary) {
    int n= salary.size();
    int sum=0;
    sort(salary.begin(), salary.end());
    for(int i=1; i<n-1; i++){
        sum= sum+salary[i];

    }
    return static_cast<double>(sum)/(n-2);
}
int main(){
    vector<int> a={4000,3000,1000,2000};
    cout<<average(a);
    return 0;
}