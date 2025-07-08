/*It's a simple sorting algorithm where adjacent
elements are repeatedly compared and swapped if they
are out of order.
It bubbles the largest(or smallest) element to the end of 
the list in each iteration,much like bubble rising to
surface.

Time complexity :- 
Best case(already sorted) -- O(n)
Worst case(reversed order) -- O(n^2)
Average case -- O(n^2)

Space complexity: O(1) [In place sorting]

In place sorting: it means you don't need some other 
array in the same array the sorting is completed.


*/
#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool swapped=false; //operation to break if already sorted
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped)break;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}

int main(){
 int size;cin>>size;
 int arr[size];
 for(int i=0;i<size;i++)cin>>arr[i];
 bubble_sort(arr,size);

}