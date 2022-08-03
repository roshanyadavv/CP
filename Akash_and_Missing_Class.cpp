#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    ll t;
    cin>>t;

    while(t--){

        ll n,count=0;
        cin>>n;
        
        if(n%7 == 6)
           count++;
        
        n = n/7;

        cout<<count+n<<endl;
    /*    int a = -25512, b= -18206;
        int c = -25512-18206;
        int d = (((b^c)|(a^c))&(-(a^b)))>>15;
        cout<<d;
*/
    }
}