#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int max_position, min_position,min_arrary = INT_MAX, max_array = INT_MIN;
    for(int i=0;i<n;i++)
    {
        // find the max_array_position
        // such that max_array_position index should be minimum, i.e, if there are multiple max_arrays
        // populate max_array_position with minimum max_array position
        if(a[i] >= max_array){
            if(a[i] == max_array && max_position < i)max_position = i;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}