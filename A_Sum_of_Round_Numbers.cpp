#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int number_of_digits = log10(n)+1;
        int d = 0;
        vector<int>temp;
        while(d < number_of_digits)
        {
            int digit = n%10;
            if(digit!=0)temp.push_back(digit*pow(10,d));
            d++;
            n/=10;
        }
        cout<<temp.size()<<"\n";
        for(int i: temp)cout<<i<<" ";
        cout<<"\n";
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}