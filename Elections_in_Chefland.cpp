#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>=b+c)
          cout<<"A"<<endl;
        
        else if(b>a+c)
          cout<<"B"<<endl;
        
        else if(c>a+b)
           cout<<"C"<<endl;

        else 
           cout<<"NOTA"<<endl;
    }
}
