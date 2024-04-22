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
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        ll pos = 0;
        ll x;
		for(int i = 0; i<n; i++) 
        {
			if(a[i]<0) 
            {
				x = a[i]+pos;
				if(x >0) 
                {
					pos = x;
					a[i] = 0;
				}
				else 
                {
					a[i] = a[i]+pos;
					pos = 0;
				}
			}
			else pos += a[i];
		}
		ll res = 0;
		for(int i = 0; i<n; i++) 
        {
			if(a[i]<0) res += abs(a[i]);
		}
		cout<<res<<endl;
    }
    
    return 0;
}