#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int count=0,a,b;
    cin>>a>>b;
    if(a%b!=0)count = b-(a%b);
    else count =0;
    cout<<count<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{
 solve();
}
return 0;
}