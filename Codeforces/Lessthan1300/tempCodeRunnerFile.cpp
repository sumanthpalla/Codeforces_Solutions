#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    vector<string>a;
    while(n--){
        string s;
        cin>>s;
        a.push_back(s);
    }
    for(int i=0;i<a.size();i++){
       if(find(a.begin(),a.end(),a[i])!=a.end()) {
           cout<<"NO"<<"\n";
           continue;
       }
       else cout<<"YES"<<"\n";
    }
    return ;

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
solve();
return 0;
}