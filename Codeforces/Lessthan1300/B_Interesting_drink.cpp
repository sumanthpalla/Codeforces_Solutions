#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,q;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    cin>>q;
    while(q--){
          int m,count=0;
          cin>>m;
          auto it = upper_bound(a,a+n,m);
          cout<<it-a<<"\n";
    }
    return ;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}