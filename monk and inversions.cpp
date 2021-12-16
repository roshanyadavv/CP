#include<iostream>
#include<vector>

using namespace std;

int main(){
      int t;
      cin>>t;
      
      while(t--){
          int n, count=0;
          cin>>n;
          
          vector<vector<int>> v;

          for(int i=0; i<n; i++){
                 
                 vector<int> v1;

              for(int j=0; j<n; j++){
                 
                 int a;
                 cin>>a;
                 v1.push_back(a);

              }

              v.push_back(v1);

          }

          for(int i=0; i<n; i++){

              for(int j=0; j<n; j++){
                  cout<<v[i][j];
              
              }
          }


      }
}