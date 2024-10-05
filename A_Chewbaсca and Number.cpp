#include<iostream>

using namespace std;

void solve(){
    string x;
    cin>>x;
    string result;
    for(int i=0;i<x.size();i++){
        if(x[i] - '0' < 5 || (i == 0 && x[i] == '9'))result += x[i];
        else result += ('9' - x[i])+'0';
    }
    cout<<result;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}