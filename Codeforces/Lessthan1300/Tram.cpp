#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    int x,y,maxofall=0,a=0;
    while(n--){   
    cin>>x>>y;
    a= y+a-x;
    maxofall=max(maxofall,a);
    }
    cout<<maxofall<<"\n";

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}