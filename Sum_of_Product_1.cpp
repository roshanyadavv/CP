#include<bits/stdc++.h>
using namespace std;

//long long count=0;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n,count=0, count1 =1;
        cin>>n;
        
        count = (n*(n+1))/2;

        vector<int> v;

        for(long long int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        if(v[0] == 0){
            count = count - n;
        }
        else
           count1 = 2;

        for(long long int i=1; i<n; i++){
            
            if(v[i] == 1){
                count1++;
            }

            if(v[i] == 0){
               
                count = count- count1*(n-i);
                count1=1;
            }
        }

        cout<<count<<endl;
    }
}