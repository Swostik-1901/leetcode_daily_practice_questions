#include <iostream>
using namespace std;
bool isHappy(int n){
    if(n==1){
        return true;
    }else{
        while(n!=1 && n!=4){
            int sum=0;
            while (n>0)
            {
                /* code */
                int temp=n%10;
                sum+= temp*temp;
                n=n/10;
            }
            
            n=sum;
        }
    }
    return n==1;
    

}
int main(){
    int a=19;
    cout<<isHappy(a);
    return 0;

}