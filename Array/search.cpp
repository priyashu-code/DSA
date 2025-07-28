#include<bits/stdc++.h>
using namespace std;

int linear_search(int arr[],int n,int size){
    
    for(int i=0;i<size;i++){
        if(arr[i]==n) return i;
    }
    return -1;
}

int binary_search(int arr[],int target,int size){
    int low=0,high=size-1;

    while(low <= high) {
        int mid = low + (high-low)/2; //(low+high)/2 to prevent doverflow problem in large arrays

        if(arr[mid]==target) return mid;
        else if(arr[mid]< target){
            low = mid+1;
        }
        else high=mid-1;
    }
    return -1; //not found
}

int main(){
    int size,key,ans;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Element to find: \n";
    cin>>key;
    cout<<"Is array sorted: ";
    cin>>ans;
     if(ans) cout<<binary_search(arr,key,size);
    else cout<<linear_search(arr,key,size);

}