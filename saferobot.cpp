#include <bits/stdc++.h>
#define LL long long int 


using namespace std;
LL MOD = 1000000007;

void solve()
{
    string s; cin>>s;
    int l,m,n = s.size(); 
    int sa, sb; cin>>sa>>sb;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A') l=i;
        if(s[i]=='B') m=i;
    }
    //cout<<l<<m;
    if( (m-l)%(sa+sb)==0 )
        cout<<"unsafe"<<"\n";
    else
        cout<<"safe"<<"\n";

}

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t;
    while(t--)
        solve();
}