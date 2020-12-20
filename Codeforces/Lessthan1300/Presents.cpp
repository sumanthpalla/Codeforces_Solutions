#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
     auto p=find(a,a+n,i+1);
     cout<<(p-a)+1<<" ";
    }
    cout<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}