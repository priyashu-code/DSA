#include<bits/stdc++.h>
using namespace std;

bool check(int number){
    if(number & 1)return true;
    else return false;
}

int main(){
    int n;cin>>n;
    if(check(n))cout<<"odd";
    else cout<<"even";
}