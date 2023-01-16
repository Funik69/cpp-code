#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;
    node (int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};

void insertAthead(node* &head, int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    head=n;
}

void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
        return ;
    }
    node* n =new node(val);
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;

}

void deletion(node* &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return ;
    }
    node* temp=head;
    int cnt=1;
    while(temp!=NULL && cnt!=pos){
        temp=temp->next;
        cnt++;
    }
    temp->prev->next=temp->next;

    if(temp->next!=NULL)
    temp->next->prev=temp->prev;

    delete temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAthead(head,0);
    display(head);

    deleteAtHead(head);
    display(head);
    
    deletion(head,2);
    display(head);
}