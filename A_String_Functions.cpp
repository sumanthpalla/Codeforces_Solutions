#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    while(q--)
    {
        string ss;
        cin>>ss;
        if(ss == "pop_back")s.erase(s.end());
        else if(ss == "front")cout<<s[0]<<"\n";
        else if(ss=="back")cout<<s.back()<<"\n";
        else if(ss=="sort"){
            int l,r;
            cin>>l>>r;
            sort(s.begin() + (l-1), s.begin() + (r-l+1));
        }
        else if(ss=="reverse"){
            int l,r;
            cin>>l>>r;
            reverse(s.begin() + (l-1), s.begin() + (r-l+1) );
        }
        else if(ss == "print pos")
        {
            int pos;
            cin>>pos;
            cout<<s[pos-1]<<"\n";
        }
        else if(ss == "substr"){
            int l,r;
            cin>>l>>r;
            string substring;
            substring = s.substring(l-1,r-l+1);
            cout<<substring<<"\n";
        }
        else
        {
            string c;
            cin>>c;
            s += c;
        }
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}