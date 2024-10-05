#include<iostream>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        c = (a+b)/2;
        cout<<(c-a)+(b-c)<<"\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}