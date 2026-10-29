#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
    sort(asteroids.begin(), asteroids.end());
    for(int i=0; i<asteroids.size(); i++){
        if(mass>= asteroids[i]){
            mass= mass+ asteroids[i];
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    vector<int> m= {3,9,19,5,21}; 
    cout<<asteroidsDestroyed(10, m);
    return 0;
}