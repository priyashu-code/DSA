#include<bits/stdc++.h>
using namespace std;

bool isSorted(int* arr,int n){
    // base case
    if(n==1 or n==0){
        return true;
    }

    // Recurrence case
    if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
    return true;
    }
    return false;

}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   if(isSorted(arr,n))cout<<"true";
   else cout<<"false";

}

/*Base case is if only one element is remaining
as if only one element is remaining and alone one will
be always sorted.
and recurrence will be a[0]<a[1] */