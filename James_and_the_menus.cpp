#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){

    int n,m,count=0,rem=0, max_average =0, maximum=0;
    cin>>n>>m;

    float mm=m;

    long double aver;

    vector<ll> elements(m, 0);
    vector<long double> averages;
    vector<ll> max;
    vector<ll> first;

    for(ll j=0; j<n; j++){
        ll sum = 0;
        for(ll i=0; i<m; i++){
            ll k;
            cin>>k;
            sum += k;
            
            if(k >= elements[i]){
                if(j>0){
                   max.push_back(j);
                }
                else{
                    first.push_back(k);
                }
                
             //   cout<<max[i]<<" ";
                elements[i] = k;
              //  cout<<elements[i]<<" ";
            }
        }
        aver = sum/mm;
        averages.push_back(aver);
    }

    for(int i=0; i<m; i++){
        int p=0;
        if(first[i] >= elements[i]){
           max.push_back(p);
        }
    }

    for(int i=0; i<max.size(); i++){
        cout<<max[i]<<" ";
    }

    sort(max.begin(), max.end());

    for(int i=1; i<max.size(); i++){
        
        if(max[i] != max[i-1]){
           if(i-rem >= count){
              count = i-rem;
              int v = max[i-1];
          //    cout<<v<<endl;
              if(averages[v] >= max_average){
                max_average = averages[v];
                maximum = v;
              }
            }
            rem = i;
        }

    }

  //  cout<<maximum+1<<endl;
}