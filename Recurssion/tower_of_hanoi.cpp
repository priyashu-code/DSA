#include<bits/stdc++.h>
using namespace std;
// it counts no. of moves
int count_moves(int n) {
    if (n == 0) return 0;
    return 2 * count_moves(n - 1) + 1;
}

// It shows movement of rods
void toh(int n,char from,char helper,char to){
      
    if(n==0)return;//base case no disk left

    toh(n-1,from,to ,helper);

    cerr<<n<<" "<< from<<"- >" <<to <<"\n";

    toh(n-1,helper,from,to);

}

int main(){
    // n no. of disks
    int n;cin>>n;
   cout<<count_moves(n);
    toh(n,'a','b','c');
}