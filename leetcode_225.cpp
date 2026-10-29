#include <iostream>
#include <stack>
#include <queue>
using namespace std;
class MyStack{
public:
    queue<int> q1;
    queue<int> q2;
    MyStack(){

    }
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        
    }
    int pop(){
        int ans= q1.front();
    
        q1.pop();
        return ans;
    }
    int top(){
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
    void print(){
        queue<int> temp=q1;
        while(!temp.empty()){
            cout<<temp.front();
            temp.pop();
        }
        cout<<endl;
        
    }
};
int main(){
    MyStack m1;
    m1.push(1);
    m1.push(2);
    m1.push(3);
    m1.push(4);
    m1.print();
    cout<<endl;
    m1.pop();
    m1.print();

    return 0;
    
}