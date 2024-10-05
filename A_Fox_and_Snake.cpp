#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    char snake_pattern[n][m];
    for(int i = 0; i<n;i+=2)for(int j = 0;j<m;j++)snake_pattern[i][j] = '#';
    for(int i = 1;i<n;i+=2)
    {
        for(int j=0;j<m;j++)
        {
            snake_pattern[i][j] = '.';
        }
        if((i+1)/2 & 1)snake_pattern[i][m-1] = '#';
        else snake_pattern[i][0] = '#';
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)cout<<snake_pattern[i][j];
        cout<<"\n";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}