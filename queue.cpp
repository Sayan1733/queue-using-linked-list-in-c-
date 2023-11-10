#include<iostream>
#include<stdlib.h>
using namespace std;

class node{
    public:
        int data;
        node* Next;
        node(int val){
            data=val;
            Next=NULL;
        }
};
void enqueue(node* &head,int x){
    node* n=new node(x);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->Next!=NULL){
        temp=temp->Next;
    }
    temp->Next=n;
}
void dequeue(node* &head){
    node* temp=head;
    head=temp->Next;
    cout<<"\nDequed item is "<<temp->data;
    delete temp; 
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<",";
        temp=temp->Next;
    }
}
int main(){
    node* head=NULL;
    int x,ch;
    while(1){
        cout<<"\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit";
        cout<<"\nEnter your choice:";
        cin>>ch;

        switch(ch){
            case 1:
                cout<<"\nEnter any data:";
                cin>>x;
                enqueue(head,x);
            break;
            case 2:
                dequeue(head);
            break;
            case 3:
                display(head);
            break;
            case 4:
                exit(0);

        }
    }
    return 0;
}
