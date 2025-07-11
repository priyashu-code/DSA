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
int best=0,sum=0;
int n;
cin>>n;int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
// Algo 3: O(n)
for (int k = 0; k < n; k++) {
 sum = max(arr[k],sum+arr[k]);
 best = max(best,sum);
 }


cout<<best;
return 0;
}

/* Algo 1: O(n^3)

for(int a=0;a<n;a++){
    for(int b=a;b<n;b++){
        int sum=0;
        for(int k=a;k<=b;k++){
            sum+=arr[k];
        }
        best = max(best,sum);
    }
}
*/

/*Algo 1: O(n^2)

for (int a = 0; a < n; a++) {
 int sum = 0;
 for (int b = a; b < n; b++) {
 sum += arr[b];
 best = max(best,sum);
 }
 }
*/