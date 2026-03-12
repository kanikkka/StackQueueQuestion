#include<iostream>
#include<list>
#include<stack>
using namespace std;
class Mystack{
   list<int>l;
   public:
   void push(int value){
    l.push_front(value);
   }
   void pop()
{
    l.pop_front();

}   
int top(){
    return l.front();

}
bool empty(){
    return l.size()==0;

}
void display(){
    while(!empty()){
        cout<<top()<<endl;
        pop();
    }
}
};
int main(){
    Mystack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();

}