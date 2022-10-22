#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n,x,y, maxx=0, count =0;
        cin>>n>>x>>y;

        vector<ll> v;

        for(ll i=0; i<n; i++){
            ll a;
            cin>>a;

            v.push_back(a);
        }

        sort(v.begin(), v.end());
        maxx = v[0]^x;
        v[0] = v[0]^x;
        count++; 
        
        if(n>1){
        for(ll i=1; i<y; i++){
            if(v[i%n] < maxx){
                v[i%n] = v[i%n] ^ x;
                count++;
            }
            
            if(v[i%n] < maxx ){
               if(i%n == n-1){
                  if(count < y){
                    if((y-count)%2 != 0){
                       v[i%n] = v[i%n]^x;
                       count =y;
                    }
                       
                  }
               }

               if(i%n != n-1){
                if(v[i%n] < v[i%n+1]){
                   if(count < y){
                     if((y-count)%2 != 0){
                        v[i%n] = v[i%n]^x;
                        count = y;
                     }
                        //v[i%n] = v[i%n]^x;
                   } 
                }
               }
            }
            
            if(count == y)
              break;

        }
        }

        if(y-count > 0){
            if((y-count) % 2 != 0)
              v[0] = v[0]^x;
        }

        sort(v.begin(), v.end());

        for(ll i=0; i<n; i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}