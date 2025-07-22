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

void print(node* &head){
    node* temp= head;

    while(temp!=NULL){
        cout<<temp ->data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void insert_at_end(node* &end,int data){
    node *temp =new node(data);
    end ->next =temp; //link new node to current last node
    end = temp; //update the end pointer
}


int main(){
    node* node1=new node(10);
    
    node *head= node1;
    node* end =node1;
    print(head);


    insert_at_end(end,12);
    print(head);

    insert_at_end(end,15);
    print(head);

}