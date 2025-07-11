// https://codeforces.com/contest/766/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fio ios::sync_with_stdio(false);
#define ip cin.tie(NULL);

void solve() {
    int t;
    cin >> t;
    ll arr[t];
    for (int i = 0; i < t; i++) cin >> arr[i];
    sort(arr, arr + t);
    
    bool can_form_triangle = false;
    for (int i = 0; i < t - 2; i++) {
        if (arr[i] + arr[i + 1] > arr[i + 2]) {
            can_form_triangle = true;
            break;
        }
    }
    
    if (can_form_triangle) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fio;
    ip;
    solve();
    return 0;
}