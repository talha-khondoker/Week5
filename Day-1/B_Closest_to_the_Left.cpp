#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin>>n>>k;
    vector<ll> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while (k--)
    {
        ll key;
        cin>>key;
        ll l=0, r=n-1;
        ll mid; 
        ll idx=-1;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(key>=a[mid])
            {
                idx=mid; l=mid+1;
            }
            else 
            {
                r=mid-1;
            }
        }
        cout<<idx+1<<'\n';
        // auto idx=upper_bound(a.begin(), a.end(), key);
        // cout<<idx-a.begin()<<'\n';
    }
    
    return 0;
}
// tc- logN
