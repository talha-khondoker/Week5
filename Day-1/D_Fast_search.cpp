#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; 
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    ll k;
    cin>>k;
    while (k--)
    {
        ll l, r;
        cin>>l>>r;
        auto itL=lower_bound(a.begin(), a.end(), l);
        auto itR=upper_bound(a.begin(), a.end(), r);
        cout<<itR-itL<<" ";
    }
    cout<<'\n';
    return 0;
}