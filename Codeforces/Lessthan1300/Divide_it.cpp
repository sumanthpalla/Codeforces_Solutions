#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n,c=0;
    cin>>n;
    while(true){
        if(n%2==0)
        {
            n/=2;
            c++;
        }
        else if(n%3==0)
         {
            n = (2*n)/3;
            c++;
         }
        else if (n%5==0) {
            n = (4*n)/5;
            c++;
        }
        else break;
        
    }
    if(c==1) cout<<"-1"<<"\n";
    else cout<<c<<"\n";

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll q;
cin>>q;
while(q--)
{
 solve();
}
return 0;
}