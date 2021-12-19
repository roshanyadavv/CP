#include<iostream>
#include <iomanip>
#include<vector>

using namespace std;

int main(){
      int t;
      cin>>t;
      
      while(t--){
          int n, count=0, p=0;
          bool b= true;
          cin>>n;
          
          vector<vector<int>> v  ;
         // vector<int> vv;

          for(int i=0; i<n; i++){
                 vector<int> temp;
              for(int j=0; j<n; j++){
                 
                 int a;
                 cin>>a;
                 temp.push_back(a);

              }

              v.push_back(temp);
          }


          for(int i=0; i<n; i++){

              for(int j=0; j<n; j++){

                 b=true;

                  for(int k=i; k<n; k++){
                      
                      if(b = false)
                         p=0;

                      else 
                         p=j;
                        
                      for(int l=p; l<n; l++){

                          if( v[i][j] > v[k][l] ){
                             count++;
                           //  vv.push_back(v[i][j]);
                             }
                      }

                      b=false;
                  }
              }
          }
        /*  
          for(int i=0; i<vv.size(); i++){
              cout<<vv[i];
          }
          cout<<endl;*/
          cout<< count<<endl;
      }
}