#include<iostream>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int freq[101]={0};
        int a[n],max_freq=0;
        for(int i=0;i<n;i++){cin>>a[i];freq[a[i]]++;}
        for(int i=0;i<=100;i++)if(freq[i]>max_freq)max_freq=freq[i];
        cout<<(n-max_freq)<<"\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}