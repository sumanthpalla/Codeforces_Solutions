#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int number_of_digits = log10(n)+1;
      cout<< (10*(n%10 - 1) + ((number_of_digits)*(number_of_digits+1))/2)<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}