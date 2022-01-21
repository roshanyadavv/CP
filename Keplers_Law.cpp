#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      float a,b,c,d;
      cin>>a>>b>>c>>d;

      a= pow(a,2);
      b=pow(b,2);
      c=pow(c,3);
      d=pow(d,3);
      
     // cout<<b/d<< " "<<a/c<<endl;
     // cout<<a<<b<<c<<d;
      if(a/c==b/d ){
         cout<<"yes"<<endl;}
      
      else 
         cout<<"no"<<endl;
      
    }
}