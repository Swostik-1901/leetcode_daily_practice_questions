#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int largestAltitude(vector<int>& gain) {
   int n= gain.size();
   int max_element= 0;
   int altitude= 0;
   for(int i=0; i<n; i++){
    max_element+= gain[i];
    altitude= max(altitude, max_element);
   }
   return altitude;

}
int main(){
    vector<int> gain={-5,1,5,0,-7};
    cout<<largestAltitude(gain);
    return 0;
}