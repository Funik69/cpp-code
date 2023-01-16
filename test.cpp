#include <bits/stdc++.h>
using namespace std;
class node{
        public:
        int data;
        node* next;
        node(int val){
            data=val;
            next=NULL;
        }
    };

    void insertAtTail(node* &head,int val){
             node* n=new node(val);
             if(head==NULL){
                 head=n;
                 return ;
             }
        node* temp=head;
        while(temp->next!=NULL){
            temp= temp->next;
        }
        temp->next=n;
    }
    void insertAthead(node* &head,int val){
        node* n= new node(val);
        n->next=head;
        head=n;
        if(head==NULL){
            head=n;
            return ;
        }
        
    }
    void display(node* head){
        node* temp =head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    bool search(node* head,int key){
        node* temp=head;
        while(temp!=NULL){
            if(temp->data==key)
            return true;
            temp=temp->next;
        }
        return false;
    }

    void deleteAtHead(node* &head){
        node* todelete=head;
        head=head->next;
    }

    void deletion(node* &head,int val){
        if(head==NULL){
            return;
        }
        if(head->next==NULL){
        deleteAtHead(head);
        return;}
        node* temp=head;
        while(temp->next->data!=val){
            temp=temp->next;
        }
        node* todelete = temp->next;
        temp->next=temp->next->next;
        delete todelete;
    }

    node* reverse(node* &head){
        //Iterative mode
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }
        return prevptr;
    }
    node* rev(node* &head){
        //recursive way
        if(head==NULL || head->next==NULL)
        return head;
        node* newhead = rev(head->next);
        head->next->next=head;
        head->next=NULL;
        return newhead;
    }

    node* reverseK(node* &head,int k){
        //reverse at k interval O(N)
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;
        int cnt=0;
        while(currptr!=NULL && cnt<k){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            cnt++;
        }

        if(nextptr!=NULL)
        head->next= reverseK(nextptr,k);
        return prevptr;
    }

    void makeCycle(node* &head,int pos){
        node* temp=head;
        node* make;
        int cnt=1;
        while(temp->next!=NULL){
            if(cnt==pos){
                make=temp;
            }
            temp=temp->next;
            cnt++;
        }
        temp->next=make;
    }

    bool detectCycle(node* &head){
        node* slow=head;
        node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
        }
        return false;
    }

    void removeCycle(node* &head){
        node* slow=head;
        node* fast=head;
        do{
            slow=slow->next;
            fast=fast->next->next;
        }while(slow!=fast);
        fast=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        slow->next=NULL;

    }

int main(){
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    

    /*insertAthead(head,6);
    display(head);
    */

    //cout<<search(head,3);

    /*display(head);
    deletion(head,3);
    display(head);
    */

   /* deleteAtHead(head);
    display(head);
    */

   /* node* newnode = reverse(head);
    display(newnode);
    */

    /* node* newnode = rev(head);
    display(newnode);
    */

    int k=2;
    node* newhead =reverseK(head,k);
    display(newhead);
    

   /* makeCycle(head,3);
    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);
    */
    



}