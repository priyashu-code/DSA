#include<bits/stdc++.h>
using namespace std;

class Node{
        public:
            int data;
            Node *left,*right;
        
        Node(int value){
            data = value;
            right=left=NULL;
            
        }


};

int main(){
    int n,r,l;
    cout<<"enter root element: \n";
    cin>>n;
    queue<Node*> q;
    Node* root = new Node(n);
    q.push(root);
    while (!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        cin>>l; //left child
        if(l!=-1){
            temp -> left = new Node(l);
            q.push(temp ->left);//adress push
        }
        cin>>r; //right child
        if(r!=-1){
            temp ->right= new Node(r);
            q.push(temp->right);
        }
    
    }
    

}