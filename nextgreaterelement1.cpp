#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
using namespace std;
vector<int>nextgreaterelement(vector<int>& num1,vector<int>&num2){
    stack<int>s;
    unordered_map<int,int>mp;
    for(int num:num2){
        while(!s.empty()&& num>s.top()){
          mp[s.top()]=num;
          s.pop();
        }
        s.push(num);

    }
    vector<int>result;
    for(int num:num1){
        if(mp.find(num)!=mp.end())
        result.push_back(mp[num]);
        else
        result.push_back(-1);
    }
    return result;
}
int main(){
    vector<int>num1={4,1,2};
    vector<int>num2={1,3,4,2};
    vector<int>ans=nextgreaterelement(num1,num2);
    for(int x:ans){
        cout<<x<<" ";
        return 0;
    }
}
