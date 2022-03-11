#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,a,b;
        cin>>n>>a>>b;
        
        int x = (int) round((long double) b * n / (a + b));
        int y = n-x;
       // ll z = (a*x*x)+(b*y*y);

        cout<<(ll)a*x*x + (ll)b*y*y<<endl;
        

    }
}