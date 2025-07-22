#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
    
    node(int data){
        this -> data =data;
        this -> next =NULL;
    }
};

void print(node* &head){
    node* temp= head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp->next;
    }
    cout<<'\n';
}

void insert_at_end(node* &end,int data){
    node *temp =new node(data);
    end ->next =temp; //link new node to current last node
    end = temp; //update the end pointer
}

void insertion_at_middle(node* &head,int position,int data){
    node* temp = head;
    int current_position=1;

    // as first us locaation tak jana padega jahan insertion hai
    while(current_position< position-1){
        temp = temp->next;
        current_position++;
    }

    // creating a node for data
    node* nodetoinsert = new node(data);

    nodetoinsert  -> next =temp ->next;
    temp->next= nodetoinsert;

}

int main(){
    node* node1 = new node(10);

    node *head= node1;
    node* end =node1;
    
    insert_at_end(end,12);
    insert_at_end(end,15);
    
    insertion_at_middle(head,3,22);
    print(head);

    insertion_at_middle(head,5,29);
    print(head);




}