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
    vector<ll> pre(n);
    pre[0]=a[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    ll q;
    cin>>q;
    while (q--)
    {
        ll key;
        cin>>key;
        ll l=0, r=n-1, mid, idx=-1;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(key<=pre[mid])
            {
                idx=mid; 
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<idx+1<<'\n';
    }
    
    return 0;
}