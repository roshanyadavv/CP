#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int ans=0;

    for(int i=0; i<k; i++){
        ans += pow(2,i);
        
    }
    cout<<ans<<endl;
}