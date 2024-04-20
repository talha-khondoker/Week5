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
            if(key>=a[mid])
            {
                idx=mid; 
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        cout<<idx+1<<'\n';
    }
    
    return 0;
}