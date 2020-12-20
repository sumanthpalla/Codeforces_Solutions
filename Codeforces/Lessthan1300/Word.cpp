#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up=0,lp=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])){
            up++;
        }
        else lp++;
        //cout<<s[i];
    }
    if(up>lp)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i])) s[i]=toupper(s[i]);
        }
    }
    else 
        for(int i=0;i<s.size();i++)if(isupper(s[i])) s[i]=tolower(s[i]);
        
    cout<<s<<endl;
    return 0;
}