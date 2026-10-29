#include <iostream>
#include <vector>
using namespace std;
bool is_leap_year(int year){
    if((year%400==0) || (year%4==0 && year%100!= 0)){
        return true;
    }
    else{
        return false;
    }
}
int dayOfYear(string date){
    vector<int> daysinmonths={31,28,31,30,31,30,31,31,30,31,30,31};
    int year= stoi(date.substr(0,4));
    int months= stoi(date.substr(5,2));
    int days= stoi(date.substr(8,2));
    if(is_leap_year(year)){
        daysinmonths[1]= 29;
    }
    int total_days= 0;
    for(int i=0;i<months-1; i++){
        total_days+= daysinmonths[i];
    }
    total_days+= days;
    return total_days;
}
int main(){
    string date = "2019-01-09";
    cout<<dayOfYear(date);
    return 0;
}