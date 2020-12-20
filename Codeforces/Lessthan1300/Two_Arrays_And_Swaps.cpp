#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[n],sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(k>0)
        {
            if(a[i]<b[i])
            {
                a[i]=b[i];
                k--;
            }
        }
    }
    //for(int i=0;i<n;i++)cout<<a[i]<<" ";
    for(int i=0;i<n;i++)sum+=a[i];
    cout<<sum<<"\n";
    return ;
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