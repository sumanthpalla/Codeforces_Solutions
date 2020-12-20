#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n,w;
    cin>>k>>n>>w;
    cout<<k * (w*(w+1))/2 -n <<endl;
    return 0;
}