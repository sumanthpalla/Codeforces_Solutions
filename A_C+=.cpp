#include<bits/stdc++.h>
using namespace std;

void solve()
{
   int t;
   cin>>t;
   while(t--)
   {
    int a,b,n,sum;
    int min_additions = 0;
    cin>>a>>b>>n;
    while(a <= n && b<=n)
    {
        if(a > b)
        {
            b += a;
        }
        else
        {
            a += b;
        }
        min_additions++;
    }
    cout<<min_additions<<"\n";
   }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}