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
    int flag=1;
    int x;cin>>x;
    int ans=x%10;
    while(x){
        int rem = x%10;
        ans=min(rem,ans);
        x/=10;
    }
    cout<<ans<<"\n";
}
return 0;
}