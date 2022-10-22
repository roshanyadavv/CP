#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        long long int n,count = 0, ans =0, m=0;
        cin>>n;

        vector<int> v;
        
        for(int i=0; i<n; i++){
           int a;
           cin>>a;

           v.push_back(a);
        }

        sort(v.begin(), v.end());
        
        if(n == 0)
          cout<<"0"<<endl;

        else if(n < 2)
          cout<<"1"<<endl;
        
        else{

        if(v[0] == 0){

        }

        while(m != n){

            int temp =0, k=0;
            count=0;
            
            for(int i=1; i<v.size(); i++){
                if(v[i] == v[i-1])
                  temp++;
                
                if(v[i] != v[i-1]){
                    if(count < temp){ count = temp;  k=v[i-1]}
                    temp = 1;
                }
            }

            if(count == n){ m = n;    ans = 1;}

            else{

                for(int i=0; i<n; i++){
                    v[i] = v[i]^k ;
                }
                ans++;
                m  += count;

                for()

            }
        }
        }
        
    }
}