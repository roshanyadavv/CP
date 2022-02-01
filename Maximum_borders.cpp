#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

      int n,m, max=0, count=0;
      cin>>n>>m;

      for(int i=0; i<n; i++){
          count=0;
          for(int j=0; j<m; j++){
              char a;
              cin>>a;
              
              if(a == '#')
                count++;
                
          }
          if(count>max)
            max = count;
          //cout<<endl;

      }

      cout<<max<<endl;


    }
}