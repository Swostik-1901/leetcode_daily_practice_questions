#include <iostream>
#include <set>
#include <vector>
using namespace std;
bool iscube(int n){
    if(n<0){
        return false;
    }
    for(int i=0;i*i*i<=n;i++){
        if(i*i*i==n){
            return true;
        }
    }
    return false;
}
vector<int> collect_perfect_cubes(int n){
    vector<int> perfect_cubes;
    for(int i=1;i<n;i++){
        if(iscube(i)){
            perfect_cubes.push_back(i);
        }
    }
    return perfect_cubes;
}
vector<int> findGoodIntegers(int n) {
    vector<int> cubes= collect_perfect_cubes(n);
    set<int> unique_good;
    for(int i=0;i<cubes.size();i++){
    
        for(int j=0;j<cubes.size(); j++){
            if(cubes[i]+cubes[j]<=n){
                unique_good.insert(cubes[i]+cubes[j]);
            }

        }
    }
    vector<int> good(unique_good.begin(), unique_good.end());
    return good;
    
}
int main(){
    
}