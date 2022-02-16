#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int n, product=1, modulo = pow(10,9)+7;
    cin>>n;

    vector<int> v;

    for(int i=0; i<n; i++){

        int a; cin>>a;
        v.push_back(a);
    }

    for(int i=0; i<n; i++){
        product = (product*v[i]) % modulo;
    }

    cout<<product<<endl;
}