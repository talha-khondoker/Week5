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
        string a, b;
        cin>>a>>b;
        ll cnt=0;
        ll n=a.size();
        ll m=b.size();
        ll dp[21][21];
        for(int i=0; i<n; i++)
        {
            dp[i][0]=0;
        }
        for(int i=0; i<m; i++)
        {
            dp[0][i]=0;
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i - 1] == b[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 0;
                }
                cnt = max (cnt, dp[i][j]); 
            }
        }
        cout<<n+m-2*cnt<<endl;
    }
    
    return 0;
}