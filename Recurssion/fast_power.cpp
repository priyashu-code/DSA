/*
  So to decrease the time complexity we can change the recurence

  a^n = (a^(n/2))^2 if even  2^18= (2^9)^2
  a^n = a*(a^(n/2))^2 if odd 2^19= 2*(2^9)^2

  So instead of O(N) it will be O(log N) as no. of steps will decrease
  */


#include<iostream>
using namespace std;

int fast_power(int n,int p){
    if(p==0) return 1;

    int subProb= fast_power(n,p/2);
    int subProbSq= subProb*subProb;

    // To check if it's power is odd
    if(p&1){
        return n*subProbSq;
    }
    return subProbSq;
}

int main(){
    int n,p;
    cin>>n>>p;
    cout<<fast_power(n,p);
}