#include<bits/stdc++.h>
using namespace std;

int main(){

    int t,count=0;
    cin>>t;

    string s;
    cin>>s;

    for(int i=0; i<s.size(); i++){
        if(s[i]== '.')
          s[i] = 'B';
        
        if(s[i]=='H' && s[i-1]=='H'){
           cout<<"NO"<<endl;
           count++;
           break;}     
    }
    
    if(count==0){
    cout<<"YES"<<endl;
    cout<<s<<endl;}
}