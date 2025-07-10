// https://codeforces.com/contest/1661/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios::sync_with_stdio(false);
#define ip cin.tie(NULL);
const int INF =1e9+7;
void solve()
{
}
int main()
{
fio;ip;
int t;
cin>>t;
while(t--)
{
    int n;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll sum=0;

    for(int i=0;i<n-1;i++){
        if ((abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1])) > (abs(a[i] - b[i + 1]) + abs(b[i] - a[i + 1])))
            {
                swap(a[i + 1], b[i + 1]);
            }
    }

    for (int i = 0; i < n - 1; i++)
        {
            sum += abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);
        }
        cout << sum << endl;
    


}
return 0;
}