#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,max=0;
    cin>>n;
 //   cout<<n;

    vector<long long int> v;

    for(int i=0; i<n; i++){
        long long int a;
        cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        long long int sum=v[i];
        int m=n-(i+1);
        int k=i+1;
       for(int count=2; count<=m; count++){
           
           for(int j=k; j<k+count; j++){
              sum +=v[j];
           }
           k = k+count;
           m = m-count;
        //   cout<<m<<" ";
       }
       if(sum > max)
         max = sum;
    }

    cout<<max<<endl;
}