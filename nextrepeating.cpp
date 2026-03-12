#include<iostream>
#include<unordered_map>
#include<stack>
#include<queue>
using namespace std;
string nonrepeating(string s){
    unordered_map<char,int>freq; //to count frequency
    queue<char>q; 
    string result="";
    for(int i=0; i<s.length(); i++){
      char ch=s[i];
      freq[ch]++;
      q.push(ch);
      while(!q.empty() && freq[q.front()]>1){
        q.pop();
      }
      if(q.empty()){
        result+='#';
      }else{
        result+=q.front();
      }
    }
    return result;


}
int main(){
    string s;
    cout<<"enetr the strign";
cin>>s;
cout<<nonrepeating(s);
}