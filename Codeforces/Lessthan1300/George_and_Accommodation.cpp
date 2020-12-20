#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,c=0;
    cin>>n;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(q-p>=2)c++;
    }
    cout<<c<<"\n";
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}