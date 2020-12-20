#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
ll n;
cin>>n;
int a[n],m=2000;
pair<int,int>p;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<n-1;i++)
{
if(abs(a[i]-a[i+1])<=m)
{
    m=abs(a[i]-a[i+1]);
    p.first=i;
    p.second=i+1;
}
}
if(abs(a[n-1]-a[0])<=m)
{
    p.first=n-1;
    p.second=0;
}
cout<<p.first+1<<" "<<p.second+1<<endl;
//cout<<p.first<<" "<<p.second<<"\n";
return ;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
solve();
return 0;
}