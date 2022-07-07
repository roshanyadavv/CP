#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    int s;
    cin>>s;

    for(int i=0; i<s; i++){
        int a;
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i=0; i<s; i++){
        cout<<v[i]<<" ";
    }

}