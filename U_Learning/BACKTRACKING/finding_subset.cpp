/*
given string find all subset of it

i/p- abc
o/p- (empty),a,b,c,ab,ac,bc,abc
*/

#include<bits/stdc++.h>
using namespace std;
/* //iterative

void subset(string s){
    int n = s.length();
    int total = 1<<n; //as 2^n subsets
    
    for(int i=0;i<total;i++){
        string subset="";

        for(int j=0;j<n;j++){
            // it checks if i'th bit of j is set to 1 if yes then include character str[j] in this subset 
            if(i & (1<<j)){
                subset+= s[j];
            }
        }
        cout<<" "<<subset<<",";
    }
    
}

*/

void findsubset(char *input,char *output,int i,int j){
    // base case
    if(input[i]=='\0'){
        output[j]='\0';
        cout<<output<<endl;
        return;
    }
    
    // recursive case

    // include ith letter
    output[j]=input[i];
    findsubset(input,output,i+1,j+1);

    // Exclude the i th letter
    findsubset(input,output,i+1,j);

}

int main(){
    // string input;cin>>input;
    // subset(input);
    char input[100];
    char output[100];

    cin>>input;
    findsubset(input,output,0,0);

    return 0;

}