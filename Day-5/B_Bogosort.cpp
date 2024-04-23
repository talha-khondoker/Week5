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
        sort(a.begin(), a.end(), greater<int>());
        for(int i=0; i<n-1; i++)
        {
            for(int j=1; j<n; j++)
            {
                if(j-a[j]==i-a[i])
                {
                    swap(a[i], a[j]);
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
    
    return 0;
}