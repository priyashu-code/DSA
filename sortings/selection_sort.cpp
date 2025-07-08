/*It divides the array in two parts the sorted and
unsorted part.

It repeadetly selects the smallest(or largest,for descending order)
element from the unsorted part and places it at the beginning of the
sorted part.

Time complexity :- 
Best case(already sorted) -- O(n^2)
Worst case(reversed order) -- O(n^2)
Average case -- O(n^2)

Space complexity: O(1) [In place sorting]


*/
#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &arr){

    for(int i=0;i<arr.size();i++){
        int min_index=i; //assume the first element is smallest

        //finding smallest in unsorted part
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min_index]){
                min_index=j;
            }
        }
        
        //swap the min element with first element
        if(min_index != i)
        swap(arr[i],arr[min_index]);
    }
    for(auto i: arr)cout<<i <<" ";


}

int main(){
 vector<int> arr;
 int value;
 while(cin>>value){
    arr.push_back(value);
 }
 selection_sort(arr);
}