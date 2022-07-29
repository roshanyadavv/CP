#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n,k;
        cin>>n>>k;

        set<int> s;

        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            s.insert(temp);
        }

        if(s.size() == k)
          cout<<"Good"<<endl;
        
        else if(s.size() < k)
          cout<<"Bad"<<endl;
        
        else
          cout<<"Average"<<endl;
    }
}