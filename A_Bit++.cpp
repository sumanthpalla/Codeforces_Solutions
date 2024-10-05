#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int x = 0;
    while(n--){
        string c;
        cin>>c;
        if(c.find("++")!=-1)++x;
        else --x;
    }
    cout<<x<<"\n";
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}