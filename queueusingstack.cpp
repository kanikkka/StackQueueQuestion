#include<iostream>
#include<stack>
#include<queue>
#include<list>
using namespace std;
class solution{
    public:
   stack<int>s1;
   stack<int>s2;
   int  myqueue(){

    }
    void push(int x){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        while(!s2.empty()){
            s1.push(s2.top());
                s2.pop();
            }
        }
        int  pop(){
            int ans=s1.top();
            s1.pop();
            return ans;
        }
      int  top(){
        return s1.top();

        }
        bool empty(){
            return s1.empty();
        }


};
int main(){
    solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<s.top()<<endl;
    
}