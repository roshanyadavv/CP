#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

      ll n,x,y, car=0,bus=0;
      cin>>n>>x>>y;

      if(n<=100){
          if(n%4 == 0){
          if(x<=y*(n/4))
            cout<<x<<endl;
          else
            cout<<(n/4)*y<<endl;
          }
          
          else{
              if(x<=y*(n/4)+y)
                cout<<x<<endl;

          else
             cout<<(n/4)*y+y<<endl;
          }
      }

      else{
          if((n%100)%4 == 0){
              bus = min((n/100)*x+x,(n/100)*x + ((n%100)/4)*y);
              if(n%4 == 0)
              car = (n/4)*y;
              else 
              car = (n/4)*y+y;
              cout<<min(car,bus)<<endl;
          }

          else{
              bus = min((n/100)*x+x,(n/100)*x + ((n%100)/4)*y+y);
              if(n%4 == 0)
              car = (n/4)*y;
              else 
              car = (n/4)*y+y;
              cout<<min(car,bus)<<endl;            
          }
      }

    }
}