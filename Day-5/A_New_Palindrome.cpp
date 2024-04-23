#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc;
    cin>>tc;
    while (tc--)
    {
        string s;
        cin>>s;
        bool flag=false;
        for(int i=0; i<(s.size()/2)-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}