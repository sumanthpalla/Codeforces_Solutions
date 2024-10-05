#include<bits/stdc++.h>

using namespace std;

/*
Tetrahedron. Tetrahedron has 4 triangular faces.
Cube. Cube has 6 square faces.
Octahedron. Octahedron has 8 triangular faces.
Dodecahedron. Dodecahedron has 12 pentagonal faces.
Icosahedron. Icosahedron has 20 triangular faces.
*/
void solve(){
    unordered_map<string,int>um;
    um["Tetrahedron"] = 4;
    um["Cube"] = 6;
    um["Octahedron"] = 8;
    um["Dodecahedron"] = 12;
    um["Icosahedron"] = 20;

    int n;
    cin>>n;
    long long ans = 0;
    for(int i=0;i<n;i++){
        string x;
        cin>>x;
        ans += um[x];
    }
    cout<<ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}