#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=1;i<=n;i++)a[i-1] = i;
        for(int i=0;i<n-1;i++){
            int round_up = ceil((a[i-1]+a[i])/2);
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}