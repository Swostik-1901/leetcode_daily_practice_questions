#include <iostream>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
    int ans= numBottles;
    int left= numBottles;
    while (left>=numExchange){
        int new_bottle= left/ numExchange;
        ans+= new_bottle;
        left= left%numExchange+ new_bottle;
        
    }
    
    return ans;
      
}
int main(){
    int numbottles=9;
    int numexchange=3;
    cout<<numWaterBottles(numbottles, numexchange);
    return 0;
}