#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;
    while (t--)
    
    {
        string s;
        cin>>s;
        ll n=s.size();
        vector<ll> a[26];
        vector<ll> ans;
        ll m=0;
        for(int i=0; i<n; i++)
        {
            a[s[i]-97].push_back(i+1);
        }
        
        ll cost=abs(s[0]-s[n-1]);
        if(s[n-1]>s[0])
        {
            for(int i=s[0]-97; i<=s[n-1]-97; i++)
            {
                ll l=a[i].size();
                m=m+l;
                
                for(int j=0; j<l; j++)
                {
                    ans.push_back(a[i][j]);
                }
                
                
            }
        }
        else
        {
            for(int i=s[0]-97; i>=s[n-1]-97; i--)
            {
                ll l=a[i].size();
                m=m+l;
                for(int j=0; j<l; j++)
                {
                    ans.push_back(a[i][j]);
                }
            }
        }
        
        cout<<cost<<" "<<m<<"\n";
        for(int i=0; i<m; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}