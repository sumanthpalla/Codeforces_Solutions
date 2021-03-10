#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,t,i=1,count=0;
    cin>>n>>t;
    while(true){
        if( (5 * ( i*(i+1))/2) <=(240-t)) {
            count++;
            i++;
        }
        else break;
    }
    cout<<(count<n?count:n)<<"\n";
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