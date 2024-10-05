#include<iostream>
using namespace std; 


void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        // check whether n is a perfect square;
        cin>>n;
        if(n/sqrt(n) == sqrt(n)){
            string s;
            cin>>s;
            if(count(s.begin(),s.end(),'0') == (n - (2 * sqrt(n) + 2 * (sqrt(n)-2)))) cout<<"Yes\n";
            else cout<<"No\n";
        }
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}