#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int k,n,w;
    cin>>k>>n>>w;
    long long ans = (w*(w+1))/2;
    cout<<(((k*ans)-n)>0?((k*ans)-n):0);
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}