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
        ll a,b, c;
        cin>>a>>b>>c;
        int ans1=abs(a-1);
        int ans2=abs(b-c)+(c-1);
        if(ans1==ans2)
        {
            cout<<3<<endl;
        }
        else if(ans1<ans2)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }
    
    return 0;
}