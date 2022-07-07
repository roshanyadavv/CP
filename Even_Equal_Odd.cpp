#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

    long long n, count1=0, count2=0, count=0;
    cin>>n;

    vector<long long int> v;
    vector<long long int> even;


    for(long long int i=0; i<2*n; i++){

        long long int a;
        cin>>a;
        v.push_back(a);
    }

    for(long long int i=0; i<2*n; i++){

        if(v[i]%2 == 0){
          count1++;
          even.push_back(v[i]);
        }

        else
          count2++;
    }
    
    if(count2 > count1)
      cout<<abs(n-count2)<<endl;
    
    else{
      //  cout<<count1<<" "<<count2<<endl;
        sort(even.begin(), even.end());
        for(int i=0; i<even.size(); i++){
            
            if(count1 > n){
            int k = even[i];
            while(k%2 == 0){
                 k = k/2;
                 count++;
               //  cout<<k;
            }
            count2++;
            count1--;
            }
            else break;
        }

        cout<<count<<endl;
    }

    }
}