#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int c = 0;
    cin >> t;
    while(t--){
        c++;
        int n, m;

        double med =0.0;

        cin >> n >> m;

        vector<int> v;

        for(int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        for(int i = n-1; m > 1; i--){
            med += v[i];
            v.pop_back();
            m--;
        }

        double s =0.0;

        if(v.size() & 1 == 1){
            s = v[v.size()/2];
        }

        else{
            s = (v[(v.size()/2)-1] + v[v.size()/2]);
            s = s/2;
        }
        
        med +=s;

        cout << "Case #" << c <<": " << fixed << setprecision(1) << med << endl;
    }
}