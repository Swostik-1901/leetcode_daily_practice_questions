#include <iostream>
#include <cmath>
using namespace std;
double angleClock(int hour, int minutes) {
    double minute_angle= 6.0* minutes;
    double hour_angle= 30*(hour%12)+ 0.5*minutes;
    double diff= abs(hour_angle- minute_angle);
    return min(diff, 360-diff);
}
int main(){
    cout<<angleClock(12,30);
    return 0;
}