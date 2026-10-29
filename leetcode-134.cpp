#include <iostream>
#include <vector>
using namespace std;
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int total_gas=0;
    int total_cost=0;
    for(int val: gas){
        total_gas+=val;
    }
    for(int val: cost){
        total_cost+=val;
    }
    if(total_gas<total_cost){
        return -1;
    }
    //there is always a unique solution to these kind of questions, so we will first solve it
    int start=0;
    int curr_gas=0;
    for(int i=0;i<gas.size();i++){
        curr_gas+= (gas[i]- cost[i]);
        if(curr_gas<0){
            start=i+1;
            curr_gas=0;
        }
    }
    return start;

}
int main(){
    vector<int> gas={2,3,6,2};
    vector<int> cost= {5,6,3,2};
    cout<<canCompleteCircuit(gas, cost);
    return 0;

}