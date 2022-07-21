#include<bits/stdc++.h>
using namespace std;

int minStepToReachTarget(vector<int> &ini,vector<int> &tar,int n){
    // Code here
    queue<pair<int, int>> q;
    int cnt = 0;
    int r[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int c[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    vector<vector<int>> vis(n, vector<int>(n, 0));
    q.push({ini[0]-1, ini[1]-1});
    vis[ini[0]-1][ini[1]-1] = 1;
    while(!q.empty()){
        int size = q.size();
        while(size--){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(x == tar[0]-1 && y == tar[1]-1){
                return cnt;
            }
            for(int i = 0 ; i < 8; i++){
                int cx = x + r[i];
                int cy = y + c[i];
                if(cx >= 0 && cx < n && cy >= 0 && cy < n && !vis[cx][cy]){
                    q.push({cx, cy});
                    vis[cx][cy] = 1;
                }
            }
           
        }
        cnt++;
    }
    return -1;
}

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,c,d,count=0, n=8;
        cin>>a>>b>>c>>d;
        
        vector<int> v{a,b};
        vector<int> v1{c,d};
        
       count = minStepToReachTarget(v,v1,n);

    //   cout<<count<<endl;

       if((100 - count)%2 == 0)
          cout<<"YES"<<endl;

       else
          cout<<"NO"<<endl;

        
    }
}

