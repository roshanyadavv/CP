#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,count=0;
        cin>>n;

        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            if(s[i] == s[i+1]){
              count++;
              i++;
            }

            else
              count++;
        }

        cout<<count<<endl;
    }
}