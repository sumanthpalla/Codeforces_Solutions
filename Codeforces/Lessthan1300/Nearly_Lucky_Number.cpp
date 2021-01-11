#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;
    int count=0,temp=0;
    while(n){
        
        if(n%10==4||n%10==7)count++;
        //cout<<count<<"\n";
        n/=10;
    }
    //cout<<count<<"\n";
    if(count==4||count==7)cout<<"YES"<<"\n";
    else cout<<"NO"<<"\n";
    return ;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}