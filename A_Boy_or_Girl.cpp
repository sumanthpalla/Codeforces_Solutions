#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    // try to count the number of distinct characters
    int freq[26] = {0};
    int distinct_chars = 0;
    for(char c: s){
        freq[c-'a']++;
    }
    for(int i=0;i<26;i++)if(freq[i]>0)distinct_chars++;
    cout<<((distinct_chars)&1?"IGNORE HIM!":"CHAT WITH HER!");
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}