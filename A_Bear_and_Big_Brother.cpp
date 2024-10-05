#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b;
    cin>>a>>b;
    int number_of_years = 0;

    while(a<=b){
        number_of_years++; // 1 2
        a *= pow(3,1); // 12 36  
        b *= pow(2,1); // 14 28 
    }
    cout<<number_of_years;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}