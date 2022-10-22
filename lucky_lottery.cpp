// You are using GCC
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,count=1,ans=0;
    cin>>a;
    
    vector<int> v(a);
    
    for(int i=0; i<a; i++){
        // int c;
        // cin>>c;
        // v.push_back(c);
        cin>>v[i];
    }
    
  //  sort(v.begin(), v.end());
    
    for(int i=0; i<a; i++){
        cout<<v[i]<<" ";
        
    }
    
    // cout<<ans;
}