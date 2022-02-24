#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
     int a,b,c=0;
     cin>>a>>b;

     c = 21-(a+b);

     if(c<=10 && c >=1 )
        cout<<c<<endl;

      else
      cout<<"-1"<<endl;


    }
}