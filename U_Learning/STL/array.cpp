#include<iostream>
using namespace std;

// Array passed by reference
/*it does not creates copy of array it point 
to same location and any change made is changed 
in original array.
*/
void update_array(int arr[],int index,int value){
    arr[index]=value;
}
// Or declare like this
void update_arr(int* arr,int index,int value){
    arr[index]=value;
}

void array_size(int* arr){
    cout<<"Inside function: "<<sizeof(arr)<<endl;
}

int main(){
    int a[]={1,2,3};
    int n = sizeof(a)/sizeof(int);//to get size of array a
    // cout<<n<<'\n';

    // size inside main
    cout<<"size inside main: "<<sizeof(a)<<endl;

    array_size(a);

    // Actual array is updated
    // update_array(a,1,13);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }


    
}
/*
  So difference of size of same array inside main and function are
  different because 
    --> So inside main you get actual size of array as per the no. of elements it's conatining and their individual size

    -->Whereas in function we are actually copying the base adress to the pointer variable so it
    gives only that size. 

    So thats why explicitly we pass the size of array with the function
    as function can not calculate it correctly.In classical array

*/