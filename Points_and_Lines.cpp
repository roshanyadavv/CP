#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       long n;
       cin>>n;
       vector<long long> x(n);
       vector<long long> y(n);
       for(long i=0; i<n; i++){
           long long tem1, tem2;
           cin>>tem1>>tem2;
           x[i]=tem1;
           y[i]=tem2;
       }
       sort(x.begin(), x.end());
       sort(y.begin(), y.end());
       long countx1=1, county1=1; 
       for(long j=1; j<n; j++){
           if(x[j-1]!=x[j]) countx1++;
           if(y[j-1]!=y[j]) county1++;

       }
       cout<<countx1+county1<<endl;
    }
    return 0;
}