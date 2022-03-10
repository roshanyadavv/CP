#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
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

    int minn = *min_element(v.begin(), v.end());
    int min1 = *min_element(v1.begin(), v1.end());
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        int c = abs(v1[j] - v[i]);
        ne.push_back(c);
        }
    }
    sort(ne.begin(), ne.end());
    int d = min(n,m), count=1;

    for(int i=0; i<ne.size(); i++){

        if(ne[i-1] != ne[i] && ne[i] >= abs(min1-minn) && count<=d){
            count++;
            cout<<ne[i]<<" ";
        }

    }

    cout<<endl;
    
}