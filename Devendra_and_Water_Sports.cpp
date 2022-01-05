#include <iostream>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

     int z,y,a,b,c;
     cin>>z>>y>>a>>b>>c;

     z = z-y;

     if(z>(a+b+c) || z==a+b+c)
       cout<<"yes"<<endl;

     else 
      cout<<"no"<<endl;

    }
}