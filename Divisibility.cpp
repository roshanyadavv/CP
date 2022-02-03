#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, sum=0;
    cin>>t;

    for(int i=0; i<t; i++){

        int a;
        cin>>a;

        if(i == t-1)
          sum= a%10;
    }

    if(sum == 0)
       cout<<"Yes"<<endl;

    else
       cout<<"No"<<endl;
}