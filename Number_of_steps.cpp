#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int t, min=0, count=0;
    cin>>t;
    
    int  a[t], b[t];
    

    for(int i=0; i<t; i++){

        cin>>a[i];

    }
  

    for(int i=0; i<t; i++){

        cin>>b[i];
        
    }
    
    min = *min_element(a, a+t);
    
    for(int i=0; i<t; i++){
        
        if(a[i]>=b[i]  && a[i]>=min  ){

         /*   if((a[i]-min)%b[i] > 0)
              cout<<"-1"<<endl;

            if((a[i]-min)%b[i] > 0)
              break; */

            if((a[i]-min)%b[i]==0)
              count += (a[i]-min)/b[i];

        
        }

    } 
      

    if(count>0)
    cout<<count<<endl;

    else
    cout<<"-1"<<endl;


}