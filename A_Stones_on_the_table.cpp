#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char c[n];
    for(int i=0;i<n;i++)cin>>c[i];
    int changes_required = 0;
    for(int i=0;i<n-1;i++)
    {
        if(c[i] == c[i+1])changes_required++;
    }
    cout<<changes_required<<"\n";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}