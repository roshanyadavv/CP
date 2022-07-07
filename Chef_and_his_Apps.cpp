#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int d,a,b,c;
        cin>>d>>a>>b>>c;

        if(d-(a+b) >= c)
           cout<<"0"<<endl;

        else if(c <= d-a || c<= d-b)
           cout<<"1"<<endl;
        
        else 
           cout<<"2"<<endl;
    }

}