
#include<bits/stdc++.h>
using namespace std;

void brute_force()
{
    string in_hand;
    cin >> in_hand;
    
    char suit_in_hand = in_hand[1];
    char rank_in_hand = in_hand[0];
    
    vector<string> cards(5);
    for(int i = 0; i < 5; i++)
    {
        cin >> cards[i];
        if(cards[i][0] == rank_in_hand || cards[i][1] == suit_in_hand)
        {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    brute_force();
}