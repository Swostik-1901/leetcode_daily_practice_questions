#include <iostream>
#include <vector>

using namespace std;
vector<int> collect_integers(int n){
    vector<int> ints;
    for(int i=1;i<=n;i++){
        ints.push_back(i);
    }
    return ints;
}
int sumOfMultiples(int n) {
    vector<int> all_integers= collect_integers(n);
    int sum=0;
    for(int i=0;i<all_integers.size(); i++){

        if(all_integers[i]%3==0 || all_integers[i]%5==0 || all_integers[i]%7==0 ){
            sum= sum+all_integers[i];
        }
    }
    return sum;
}
int main(){
    int n=7;
    cout<<sumOfMultiples(n);
    return 0;
}
