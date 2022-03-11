#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    bool boo = true;
    cin>>n;
    vector<int> v;
    vector<int> ne;

    for(int i=0; i<n; i++){
       int a;
       cin>>a;

       v.push_back(a);
    }

    cin>>m;
    vector<int> v1;

    for(int i=0; i<m; i++){

        int b;
        cin>>b;

        v1.push_back(b);
    }

    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());

   
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<101; k++){
                if(v[j]+k == v1[i])
                  ne.push_back(k);
            }
        }
    }
    
   // m = min(m,n);
    sort(ne.begin(), ne.end());

    vector<int> v2;

    for(int i=0; i<ne.size(); i++){
        if(ne[i-1] != ne[i] && ne[i] >= v1[0]-v[0] && ne[i] <= (v1.back() - v.back())){
           int d = ne[i];
           v2.push_back(d);
        }
    }

    for(int i=0; i<v2.size(); i++){
        for(int i=0; i<n; i++){
            
        }
        cout<<v2[i]<<" ";
    }

    cout<<endl;
    
}