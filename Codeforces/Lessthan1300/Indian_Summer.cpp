#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n,c=0;
    cin>>n;
    vector<pair<string,int>>m;
    while(n--){
        string s;
        cin>>s;
        if(find(m.begin(),m.end(),{s,1})!=m.end())m.push_back({s,1});
        else m[s]++;
    }
   cout<<m.size()<<"\n";

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}