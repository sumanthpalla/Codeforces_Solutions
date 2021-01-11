#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0;i<s1.size();i++)s1[i]=tolower(s1[i]);
    for(int i=0;i<s2.size();i++)s2[i]=tolower(s2[i]);
    //cout<<s1<<"\n"<<s2<<"\n";
    for(int i=0;i<s1.size();i++){
        if(s1[i]==s2[i])continue;
        else if(s1[i]<s2[i]){
            cout<<"-1"<<"\n";
            return ;
        }
        else {
            cout<<"1"<<"\n";
            return;
        }
    }
    cout<<"0"<<endl;
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