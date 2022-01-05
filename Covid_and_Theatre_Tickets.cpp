#include <iostream>
#define ll long long int
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
      int row, column, count=0;
      cin>>row>>column;
      
      if(row==1){
          if(column%2==0){
          count = column*(row) - (row*column/2);
          }
         
          else 
          count = column*(row)- (row*(column/2));
      }
          else if(row%2 != 0){
          if(column%2==0){
          count = column*(row/2+1) - ((row/2+1)*column/2);
          }
         
          else 
          count = column*(row/2+1)- ((row/2+1)*(column/2));
          }
          
          else{
            if(column%2==0){
          count = column*(row/2) - ((row/2)*column/2);
          }
         
          else 
          count = column*(row/2)- ((row/2)*(column/2));
          }
     /* else{
          
           if(column%2==0){
          count = column*(row/2 - 1)- (row/2*column/2);
           }
         
          else 
          count = column*(row/2 - 1)- (row/2*(column/2 -1));
      }*/

      cout<<count<<endl;
      
    }
}