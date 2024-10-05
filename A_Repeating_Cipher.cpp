#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s,res="";
    cin>>s;
    int pick_index = 0, i = 0;
    while(pick_index < n)
    {
        pick_index = (i*(i+1))/2;
        if(pick_index<n)res += s[pick_index];
        i++;
    }
    cout<<res;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}