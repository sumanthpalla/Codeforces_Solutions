#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        while(a.size()>1)
        {
            // turtle plays
            a[0] = max(a[0],a[1]);
            a.erase(a.begin() + 1);
            // piggy plays
            if(a.size()>1)
            {
                a[0] = min(a[0],a[1]);
                a.erase(a.begin() + 1);
            }
        }
        cout<<a[0]<<"\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}
