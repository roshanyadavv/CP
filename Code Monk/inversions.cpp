#include<iostream>
#include <iomanip>
#include<vector>

using namespace std;

int main(){
      int t=1;
      cin>>t;
      
      while(t--){
          int n=0, count=0;
          cin>>n;
          
          vector<vector<int>> v;

          for(int i=0; i<n; i++){
                 
              for(int j=0; j<n; j++){
                 
                 int a;
                 cin>>a;
                 //cout<<a;
                 v[i][j]==a; 
              }
          }

          for(int i=0; i<n; i++){

              for(int j=0; j<v[i].size(); j++){

                int a=v[i][j];
                cout<<a;
              
              }
          }


      }
}