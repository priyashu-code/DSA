/*
    Given n friends who want to go to party, each one can remain
single or can be paired up with some other friend.Each friend can be paired
only once. Find out the total number of ways in which friends can remain single
or can be paired up 

exm:-  n=3 a,b,c
all single a+b+c
ab + c (ab as pair and c single)
ac+b
bc+a   4 ways

n=9   ans=2620
*/

#include<bits/stdc++.h>
using namespace std;

int pair_ways(int n){
    if(n==0 || n==1)return 1;
    return pair_ways(n-1) + (n-1)*pair_ways(n-2);
}

int main(){
    int n;cin>>n;
    cout<<pair_ways(n);

}