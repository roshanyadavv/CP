#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a;
        cin>>a;

        vector<int> v(a);

        for(int i=0; i<a; i++){
            cin>>v[i];
        }

        if(v[0] != 1)
          cout<<"No"<<endl;
        
        else 
        cout<<"Yes"<<endl;
    }
}