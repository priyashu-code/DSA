/*
Counting sort is a non-comparison based sorting algo that
sorts integers by counting the occurence of each unique
element in input array.

It works effieciently for arrays where elements are
within a small range and non-negative.

Unlike other sorting algorithms, it relies on
the frequency of elements rather than comparisons.

Time complexity :- 
Best case -- O(n+k)
Worst case -- O(n+k)
Average case -- O(n+k)

n--> no. of elements in array
k--> range of input(max value-min value)

Space complexity: O(k)


array : 4 2 2 8 3 3 1

count: 0-0
       1-1
       2-2
       3-2
       4-1
       5-0
       6-0
       7-0
       8-1
  so here i will maintain a count how many of any value
  so i will run a loop in count and print them accordingly
  in a looped manner.      
  1 2 2 3 3 4 8

*/
#include<bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> & arr,int maxvalue){

    //create the coun array for frequency
    vector<int> count(maxvalue+1,0);

    //count occurence of each element
    for(int num: arr)
    count[num]++;

    //overwrite the input array with sorted values
    int index=0;
    for(int i=0;i<=maxvalue;i++){
        while(count[i]>0){
            arr[index++]=i;
            count[i]--;
        }
    }

    for(auto i:arr)cout<<i<<" ";


}

int main(){
    vector<int> arr;
    int max_value;
    cin>> max_value;
    int x;
    while(cin>>x)arr.push_back(x);
    counting_sort(arr,max_value);

}

