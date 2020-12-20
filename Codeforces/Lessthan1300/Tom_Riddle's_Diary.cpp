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
    cout<<"NO"<<"\n";
    for(int i=1;i<a.size();i++){
       if(find(a.begin(),a.begin()+i,a[i])!=a.begin()+i) {
           cout<<"YES"<<"\n";
           
       }
       else cout<<"NO"<<"\n";
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