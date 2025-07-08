/*
It builds the final sorted array one element at a time
by inserting each element into it's correct position
in the sorted part of the array.

Time complexity :- 
Best case(nearly sorted) -- O(n)
Worst case(reversed order) -- O(n^2)
Average case -- O(n^2)

Space complexity: O(1) [In place sorting]
*/

#include<bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v){
    for(int i=0;i<v.size();i++){
        int key = v[i]; //current element to be inserted
        int j = i-1;

        //shift element of the sorted portion to the right
        while(j>=0 && v[j]>key){
            v[j+1]=v[j];
            --j;
        }

        //insert the key to the correct place
        v[j+1] = key;
    }
     for(auto i: v)cout<<i <<" ";
}

int main(){
    vector<int> arr;
    int x;
    
    while(cin>>x)
    arr.push_back(x);

    insertion_sort(arr);

}

