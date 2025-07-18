#include<iostream>
using namespace std;

int powerof(int n ,int p){
    if(p==0) return 1;
    return n*powerof(n,p-1);

}

int main(){
    int n,power;
    cin>>n>>power;
    cout<<powerof(n,power);

}