#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
    int n,a,b,count0=0, count1 =0;
    cin>>n>>a>>b;

    string s;
    cin>>s;

    for(int i=0; i<n; i++){

        if(s[i] == '0'){
            count0++;
        }

        else if(s[i] == '1'){
            count1++;
        }
    }
   
   if(a>0 && b>0)
      cout<<abs(a-count0) + abs(b-count1)<<endl;
   
   else if(b==0)
      cout<<abs(a-count0) <<endl;
//cout<<count0<<" "<<count1<<endl;
 //   cout<<s<<endl;
 }
}