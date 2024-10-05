#include<iostream>
using namespace std; 


void solve(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a == 0 || b== 0){
            if(a & 1 || b & 1)cout<<"No\n";
            else cout<<"Yes"<<"\n";
        }
        else{
            cout<<((a + 2*b)&1?"No\n":"Yes\n");
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}