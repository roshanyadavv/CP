#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin>>v[i];
    }

    ll sum = 0, count = 0,neg=-1111111111111111;

    for(int i=0; i<n; i++){
        ll temp = sum;
        temp = temp + v[i];

        if(v[i]>neg){
            neg = v[i];
        }

        if(temp>=sum){
            count++;
            sum = temp;
        }
    }
    if(sum == 0 && count == 0){
        sum = neg;
        count++;
    }

    cout<<sum<<" "<<count<<endl;
}