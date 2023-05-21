#include<iostream>


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

void insert_at_tail(node* &head , int val){

    
    node* n=new node(val);

    if(head==NULL){
        head=n;
        return;
    }


    node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void print(node* head){

    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

void insertatstart(node* &head,int val){
    node*n=new node(val);

    n->next=head;
    head=n;
    return;
}

void insert_in_between(node*head , int val , int index){
    node*temp=head;
    node*n=new node(val);

    for(int i=0;i<index;i++){
        temp=temp->next;
    }

    n->next=temp->next;
    temp->next=n;
    return;
}

int main(){
    node* head=NULL;
    insert_at_tail(head , 1);
    insert_at_tail(head , 2);
    insert_at_tail(head , 3);
    print(head);
    insertatstart(head , 4);
    print(head);


}