#include <iostream>
using namespace std;
int findNthDigit(int n){
    long long digitlength =1;//this is for the intial check starting from 1 digit numbers
    long long count= 9; // this for the total number of one digit numbers that is 1 to 9   
    long long start= 1; // by default start from  1 
    while(n> digitlength* count){                  
        n= n- digitlength*count;               
        digitlength++;            
        count= count*10;           
        start=start*10;  
    }              
    long long num= start +(n-1)/digitlength;      
    string s= to_string(num);            
    return s[(n-1)% digitlength]-'0';               
}


int main(){


    int n=15;


    cout<<findNthDigit(n);


    return 0;
}