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
        int n;
        cin>>n;
        int p[n];
        for(int i=0; i<n; i++)
        {
            cin>>p[i];
        }
        bool flag=false;
        int x, y,z;
        for(int i=1; i<n-1; i++)
        {
            if(p[i-1] < p[i])
            {
                if(p[i] > p[i+1])
                {
                    x = i;
                    y = i + 1;
                    z = i + 2;
                    flag=true;
                    break;
                }
            }
        }
        if(flag) 
        {
            cout<<"YES"<<'\n'<<x<<" "<<y<<" "<<z<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    
    return 0;
}