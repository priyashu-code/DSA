/*
use freopen when in any contest 
i/p and output are in form of files */ 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios::sync_with_stdio(false);
#define ip cin.tie(NULL);
const int INF =1e9+7;
#define input freopen("input.txt", "r", stdin);
#define output freopen("output.txt", "w", stdout);
int main()
{
fio;ip;
int t;cin>>t;
while(t--){
    int n,k;cin>>n>>k;    
    int a[n];
    int ans=0,hike=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==0)ans++;
        else if(a[i]!=0 && ans>=0)ans=0;
        if(ans==k){hike++;i++;ans=0;}
    }
    cout<<hike<<'\n';
    



}
return 0;
}