#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int second_lrgest(int arr[],int size){
    int largest=INT_MIN,second=INT_MIN;


    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
        }
    }

    if(second==INT_MIN) return -1;
    else return second;
    //handels the case when no 2nd largest
    

}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<second_lrgest(arr,n);



}