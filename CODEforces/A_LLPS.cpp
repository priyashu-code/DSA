// https://codeforces.com/problemset/problem/202/A
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
int count=1;
string s;
cin>>s;
char min=s[0];
for(int i=1;i<s.length();i++){
    if(s[i]>min){
        min=s[i];
        count=1;
    }
    else if(s[i]==min) count++;
}
while(count--)cout<<min;
return 0;
}