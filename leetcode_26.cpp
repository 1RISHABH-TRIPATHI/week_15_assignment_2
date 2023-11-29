#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
        int val;
        Node * next;
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
Node* removeElements(Node* head, int val) {
    if(head==NULL)  return head;
    while(head!=NULL && head->val==val)   
     {
         head=head->next;
     }
    Node *temp=head;
     while(temp!=NULL && temp->next!=NULL)
     {
         if(temp->next!=NULL && temp->next->val==val)
         temp->next=temp->next->next;
         else temp=temp->next;
     }
     return head;
    }
int main()
{
    Node *a=new Node(10);
    Node * b=new Node(40);
    Node * c=new Node(30);
    Node * d=new Node(40);
    Node * e=new Node(50);
    Node * f=new Node(60);
    Node * g=new Node(70);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    Node *ans=removeElements(a,40);
}