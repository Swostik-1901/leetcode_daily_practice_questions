#include <iostream>
using namespace std;
string int_to_roman(int num){
    string ones[]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
    string tens[]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string hundreds[]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string thousands[]={"","M","MM","MMM"};
    string ans= thousands[num/1000]+hundreds[(num/100)%10]+tens[(num/10)%10]+ones[(num%10)];
    return ans;

}
int main(){
    int a=2023;
    cout<<int_to_roman(a);
    return 0;
}