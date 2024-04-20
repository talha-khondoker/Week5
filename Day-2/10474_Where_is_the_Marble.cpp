#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    ll tc=1;
    while (cin>>n>>q, n||q)
    {
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        cout<<"CASE# "<<tc++<<":"<<'\n';
        while (q--)
        {
            ll key;
            cin>>key;
            auto it=lower_bound(a.begin(), a.end(), key);
            if (it== a.end() || *it != key)
            {
                cout << key << " not found\n";
            }
            else
            {
                cout << key << " found at " << (it - a.begin()) + 1 << '\n';
            }
        }
    }
    
    return 0;
}