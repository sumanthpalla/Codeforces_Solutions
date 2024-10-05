// brute fruce: traverse each subarray and get the subarray length if the subarray is sorted in ascending order
#include<bits/stdc++.h>
using namespace std;

bool issorted(int *a, int i, int j ){
    bool  ans = true;
    for(int k = i; k<j;k++)if(a[k] >= a[k+1]){ans = false;break;}
    return ans;
}

void brute_force()
{
    int n;
    cin>>n;
    int a[n],max_length = 1;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(issorted(a,i,j))max_length = max(max_length,(j-i+1));
            // cout<<max_length<<"\n";
        }
    }
   cout<<max_length;
   
}
// efficient approach using sliding window dynamic

void maximum_length_subarray(){
    int n;
    cin>>n;
    int a[n],max_length=1;
    for(int i=0;i<n;i++)cin>>a[i];
    int s = 0, e = 1;
    for(;e<n;e++)
    {
        // condition for breaking the current window
        if(a[e] <= a[e-1])s=e;
        max_length = max(e-s,max_length);
    }
    cout<<max_length;
}


signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // brute_force();
    maximum_length_subarray();
}