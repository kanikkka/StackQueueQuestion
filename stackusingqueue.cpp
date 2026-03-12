#include<iostream>
#include<stack>
#include<queue>
#include<list>
using namespace std;
class solution{
    public:
     stack<int>s;
     queue<int>q1;
     queue<int>q2;
     int mystack(){

     }
     void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
     }
     int pop(){
        int ans=q1.front();
        q1.pop();
        return ans;
     }
     int top(){
        return q1.front();
     }
     bool empty(){
        return q1.empty();
     }

};
int main(){
    solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top()<<endl;
    s.pop();

}