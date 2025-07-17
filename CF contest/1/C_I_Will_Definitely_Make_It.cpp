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
while (t--)
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=1;i<=n;i++)cin>>a[i];
    int h=a[k],l=0,time=0,*maxe=max_element(a,a+n);
    sort(a,a+n);
    for(int i=1;i<=n;i++){
        if(a[i]>h){
            time=abs(a[i]-h);
            if()
        }
        else l++;

    }
}


return 0;
}