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
    int a[n][3],miss[n]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>a[i][j];
        }
    }
    int mon=k;
    for(int i=0;i<n;i++){
        if(miss[i]==0){
        for(int j=0;j<3;j++){
            if(a[i][0]<=k && k<=a[i][1]){
                miss[i]=1;
                mon=a[i][2];
            }
        }
    }
        
    }
}
return 0;
}