#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int k=n*(n-1)/2,b[k];
        for(int i=0;i<k;i++)
        {
            cin>>b[i];
        }
        sort(b,b+k);
        for(int i=0;i<k;i+=--n)
        {
            cout<<b[i]<<' ';
        }
        cout<<"1000000000\n";
    }
    
    return 0;
}
