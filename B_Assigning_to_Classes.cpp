#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)cin>>a[i];
        sort(a,a+(2*n));
        cout<<(a[((2*n)+1)/2] - a[(2*n-1)/2])<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}