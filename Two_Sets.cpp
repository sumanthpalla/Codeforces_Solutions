#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    int curr_sum = 0;
    if(!(n&1)){cout<<"NO\n";return;}
    long long required_sum = (n*(n+1))/2;
    vector<int>first,second;
    for(int i = 1;i<=n;i++)
    {
        if(curr_sum <= required_sum/2){first.push_back(i);curr_sum += i;}
        else second.push_back(i);
    }
    cout<<"YES\n";
    for(int i: first)cout<<i<<" ";
    cout<<"\n";
    for(int i: second)cout<<i<<" ";
    cout<<"\n";
}

int main(){
    solve();
    return 0;
}