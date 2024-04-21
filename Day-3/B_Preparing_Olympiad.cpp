#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, l, r, x;
    cin>>n>>l>>r>>x;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ll ans=0;
    for(int i=0; i<(1<<n); i++)
    {
        ll mx=INT_MIN;
        ll mn=INT_MAX;
        ll sum=0;
        for(int j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum+=a[j];
                mx=max(mx,a[j]);
                mn=min(mn,a[j]);
            }
        }
        if(l<=sum && sum<=r && (mx-mn)>=x)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}