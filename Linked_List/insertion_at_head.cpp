#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // constructor
    node(int data){
        this -> data= data;
        this -> next = NULL;
    }
};

// we took reference taki original change ho it doen't make any copy
void insert_at_head(node* &head,int data){

    node* temp = new node(data);
    temp -> next = head;
    head =temp;
}

// printing a LL
void print(node* &head){
    node* temp= head;

    while(temp!=NULL){
        cout<<temp ->data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    node* node1 = new node(10);
    // cout<<node1 -> data <<endl;
    // cout<<node1 -> next <<endl;

    // head pointing to node1
    node *head =node1;
    print(head);

    insert_at_head(head,12);
    print(head);

     insert_at_head(head,15);
    print(head);

}