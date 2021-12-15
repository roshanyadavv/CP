#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int temp, l, m, n;
        for(int i=0; i<4; i++){
            cin>>temp;
        }
        cin>>n>>m>>l;
        cout<<l-m<<" "<<l-n<<" "<<m-(l-n)<<endl;
    }
}