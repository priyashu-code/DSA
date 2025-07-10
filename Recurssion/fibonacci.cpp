#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios::sync_with_stdio(false);
#define ip cin.tie(NULL);
const int INF =1e9+7;

int fibonacci(int n){
    if(n==0 || n==1) return n;
    return fibonacci(n-1)+fibonacci(n-2);

}
int main()
{
fio;ip;
int n;cin>>n;

cout<<fibonacci(n);

return 0;
}