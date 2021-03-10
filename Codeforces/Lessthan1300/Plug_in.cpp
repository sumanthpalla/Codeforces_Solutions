#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s,t;
    char temp;
    cin>>s;
    vector<char>v;
    v.push_back(s[0]);
    for(int i=1;i<s.size();i++){
        if(!v.empty() && v.back()==s[i]) v.pop_back();
        else v.push_back(s[i]);
    }
    for(char c:v)cout<<c;
    cout<<'\n';
    return;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}