#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k; 
    cin>>n>>k;
    ll a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    while (k--)
    {
        ll key;
        cin>>key;
        int l=0, r=n-1; 
        ll mid;
        ll ans=-1;
        while (l<=r)
        {
            mid=(l+r)/2;
            if(key==a[mid])
            {
                ans=mid;
                break;
            }
            else if(key<a[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        if(ans==-1)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            cout<<"YES"<<'\n';
        }
    }
    
    return 0;
}