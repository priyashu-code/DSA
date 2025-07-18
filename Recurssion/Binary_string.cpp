/*
Count the number of binary strings with no consecutive ones that
can be formed using binary string of length N.

INPUT: N
OUTPUT: count of strings

exm --- n=2   00 01 10 {11} 11 is not valid
so output = 00 01 10 as no consecutive 1
*/
/*
use freopen when in any contest 
i/p and output are in form of files */ 

/*
use freopen when in any contest 
i/p and output are in form of files */ 

#include<bits/stdc++.h>
using namespace std;

int countString(int n,int last){
    if(n==0) return 1;
    if(last==0){
        return countString(n-1,0) + countString(n-1,1); 
    }
    else{
        // only add 0 to avoid consecutive 1
        return countString(n-1,0);
    }
}



int main()
{
    int n;cin>>n;
    int total = countString(n-1,0)+countString(n-1,1);
    cout<<total;

return 0;
}