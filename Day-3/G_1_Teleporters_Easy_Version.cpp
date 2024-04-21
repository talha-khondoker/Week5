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
        ll n, c;
        cin>>n>>c;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(), a.end());
        ll sum=0;
        ll cnt=0;
        for(int i=0; i<n; i++)
        {
            if(sum+a[i]>c) 
            break;
            sum+=a[i];
            cnt++;
        }
        cout<<cnt<<'\n';
    }
    
    return 0;
}