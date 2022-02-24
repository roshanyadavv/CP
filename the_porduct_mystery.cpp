#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
     ll a,b,c=0,n1=0,n2=0;
     cin>>a>>b;

     n1=a;
     n2=b;

     while(n1 != n2) {
      if(n1 > n2)
        n1 -= n2;
      else
        n2 -= n1;
     }



     c = b/n1;

     cout<<c<<endl;
  
  

    }
}