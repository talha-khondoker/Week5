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
        ll n, q;
        cin>>n>>q;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(), a.end(), greater<ll>());
        vector<ll> pre(n);
        pre[0]=a[0];
        for(int i=1; i<n; i++)
        {
            pre[i]=pre[i-1]+a[i];
        }
        while (q--)
        {
            ll key;
            cin>>key;
            int l = 0, r = n-1, idx = -1;
            while(l <= r) 
            {
                int mid = (l + r) / 2;
                if(pre[mid] >= key) 
                {
                    idx = mid+1;
                    r = mid - 1;
                } 
                else 
                {
                    l = mid + 1;
                }
            }
            cout << idx << "\n";
        }
    }
    
    return 0;
}