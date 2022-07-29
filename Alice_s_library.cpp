#include<bits/stdc++.h>
using namespace std;

int main(){

    string s,snew;
    cin>>s;

    stack<char> ss;

    for(int i=0; i<s.size(); i++){
        
        if(s[i] !=  && s[i] != \ ){
            ss.push(s[i]);
        }
    }

    for(int i=0; i<ss.size(); i++){
        snew[i] = ss.top();
    }

    cout<<snew<<endl;
}