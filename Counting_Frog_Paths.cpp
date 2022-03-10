#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c,d,count=0;
    cin>>a>>b>>c>>d;

    for(int i=b; i<=b+c; i++){
        for(int j=a; j<=a+c; j++){
           if(i+j <= d)
           count++;
        }
    }

    cout<<count<<endl;
    

}