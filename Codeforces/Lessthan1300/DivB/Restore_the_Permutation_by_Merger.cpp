#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)cin>>a[i];
    cout<<a[0]<<" ";
    for(int i=1;i<2*n;i++){
        if(find(a,a+i,a[i])!=a+i)continue;
        else{
            cout<<a[i]<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll t;
cin>>t;
while(t--)
{
 solve();
}
return 0;
}