#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int weeks[7];
    for(int i=0;i<7;i++)cin>>weeks[i];
    int last_day;
    while(n > 0)
    {
        for(last_day=0;last_day<7;last_day++)
        {
            n-=weeks[last_day];
            if(n<=0)break;
            // cout<<"n: "<<n<<" last_day:"<<last_day<<"\n";
        }
    }
    cout<<last_day+1;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}