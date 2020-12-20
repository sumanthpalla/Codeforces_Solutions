#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,h,c=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]>h)c+=2;
        else c++;
    }
    cout<<c<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}