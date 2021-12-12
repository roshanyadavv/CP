#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    while(t--)
    {
        int v,h;

        cin >> v >> h;

        string s;

        if(v<h)
        {
            h = h-v;

            for(int i=0;i<v;i++){
                s= s+"10";
            }

            for(int i=0;i<h;i++){
                s=s+"101";
            }   
        }

        else if(v>h)
        {
          v = v-h; 
            for(int i=0;i<h;i++)
            {
                s=s+"01";
            }
            for(int i=0;i<v;i++)
            {
                s=s+"010";
            }          
        }

        else
        {
            for(int i=0;i<h+1;i++)
            {
                s=s+"01";
            }
        }
    cout << s.size() << endl;
    cout << s << endl;
    }
    return 0;
}