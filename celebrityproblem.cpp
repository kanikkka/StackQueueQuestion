#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int celebrity(vector<vector<int>>&m,int n){
    stack<int>s;
    for(int i=0; i<n; i++){ //all person added in stack
        s.push(i);
    } 
    // check which can be celebrity
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(m[a][b]==1){
            // a knows b than a can not be celebrity
            s.push(b);
        }else{
            s.push(a);
        }
    }
    int candidate=s.top();
    //verify that celebrity does not know anyone 
    //but everyone know him/her
    for(int i=0; i<n; i++){
        if(i!=candidate){
           if(m[candidate][i]==1 || m[i][candidate]==0){
            return -1;
           }
        }
    }
    return candidate;


}
int main() {

    vector<vector<int>> m = {
        {0,1,1},
        {0,0,1},
        {0,0,0}
    };

    int n = m.size();

    int ans = celebrity(m, n);

    if(ans == -1)
        cout << "No Celebrity Found";
    else
        cout << "Celebrity is person: " << ans;

}