#include<iostream>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(!(n&1))
        {
            cout<<"-1\n";
        }
        else
        {
            int a[n];
            a[n/2] = 1;
            for(int i=(n/2)-1;i>=0;i--)a[i] = a[i+1]+2;
            for(int i = (n/2)+1; i<n;i++)a[i] = (i==((n/2)+1)?a[i-1]+1:a[i-1]+2);
            for(int i=0;i<n;i++)cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}