#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b;
        cin>>a>>b;

        if(b > a)
          cout<<"0"<<endl;
        
        else{
            if((b-a)%4 == 0)
              cout<<abs(b-a)/4<<endl;
            
            else
              cout<<(abs(b-a)/4)+1<<endl;
        }

    }
}