#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    double n,l,w, count=0;
    cin>>n;

    for(int i=0; i<n; i++){

        cin>>l>>w;
        double r = l/w;
        
        if(r<=1.7 && r>=1.6)
           count++;

    }

    cout<<count<<endl;
}