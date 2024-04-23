#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n;
    vector<ll> a(n); 
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    vector<ll> b(m);
    for(int i=0; i<m; i++)
    {
        cin>>b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if (abs(a[i] - b[j]) < 2)
            {
                b[j] = 1000;
                cnt++;
                break;
            }
        }
    }
    cout<<cnt<<'\n';
    return 0;
}