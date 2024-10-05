#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,max_of_array = INT_MIN;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(max_of_array > a[i])max_of_array = a[i];
        }
        if(n&1){

        }
        else{
            cout<<max_of_array+(n/2)<<"\n";
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}