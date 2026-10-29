#include <iostream>
using namespace std;
class soluion{
public: 
    bool isPowerOfTwo(int n) {
        if(n<1){
            return false;
        }
        else if(n==1){
            return true;
        }else{
            while(n%2==0){
                n=n/2;
            }
            if(n==1){
                return true;
            }else{
                return false;
            }
        }

        
    }
};
int main(){
    soluion s1;
    cout<< s1.isPowerOfTwo(1);
    return 0;
}