#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],sum=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)sum+=a[i];
    //cout<<<<endl;
    printf("%.9f",(double(sum)/n));
    return 0;
}