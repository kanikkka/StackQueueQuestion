#include<iostream>
#include<stack>
using namespace std;

class solution{
public:
    stack<int> s1;
    stack<int> s2;

    
    void push(int x){
        s1.push(x);
    }

    int pop(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }

        int ans = s2.top();
        s2.pop();
        return ans;
    }


    int top(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty(){
        return s1.empty() && s2.empty();
    }
};

int main(){
    solution s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout << s.top() << endl;  
}