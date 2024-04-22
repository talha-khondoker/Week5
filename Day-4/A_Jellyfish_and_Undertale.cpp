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
        ll a, b, n;
        cin>>a>>b>>n;
        ll ans=b;
        for(int i=0; i<n; i++)
        {
            ll x; cin>>x;
            ans+=min(a-1, x);
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}