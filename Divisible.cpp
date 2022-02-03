#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t, sum=0;
    cin>>t;

    for(long long int i=1; i<=t; i++){
        
        long long int a;
        cin>>a;

        if(i<=t/2){

           int d = (long long int)log10(a);
           sum = sum*10 + (int)(a / pow(10, d));
        }
        
        else
          sum = sum*10 + a%10;
    }

    if(sum%11 == 0)
       cout<<"OUI"<<endl;

    else
       cout<<"NON"<<endl;
}