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
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll cntN=0;
        ll sum=0;
        ll mn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]<0)
            {
                cntN++;
            }
            sum+=abs(a[i]);
            mn=min(mn,abs(a[i]));
        }
        if(cntN%2==0)
        {
            cout<<sum<<'\n';
        }
        else
        {
            sum-=(2LL*mn);
            cout<<sum<<'\n';
        }
    }
    
    return 0;
}