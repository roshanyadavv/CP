#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int d,a,b,c;
        cin>>d>>a>>b>>c;

        if( d==b || a ==c)
          cout<<"2"<<endl;
        
        else
          cout<<"1"<<endl;
    }

}