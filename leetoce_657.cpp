#include <iostream>
using namespace std;
bool judgeCircle(string moves) {
    int horizontal=0; //this determines the horizontal moves of the robot
    int vertical=0; // this determines the vertical moves of the robot
    for(char c: moves){
        if(c=='R'){
            horizontal++;
        }else if(c=='L'){
            horizontal--;
        }else if(c=='U'){
            vertical++;
        }else if(c=='D'){
            vertical--;
        }
    }
    if(horizontal==0 && vertical==0){ // this means at the end if the horizontal and vertical values is 0 whicjh means that the robot is back to its original position after completing all the moves, then we willr return true or else false otherwise
        return true;
    }else{
        return false;
    }
}
int main(){
    string moves="LDR";
    cout<<judgeCircle(moves);
    return 0;
}