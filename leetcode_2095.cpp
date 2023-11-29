#include<iostream>
#include<vector>
using namespace std;
class Node {
    public:
        int vaL;
        Node * next;
        Node(int val)
        {
            this->vaL=val;
            this->next=NULL;
        }
};
Node* deleteMiddle(Node* head) 
{
        if(head==NULL || head->next==NULL) return NULL;
        Node *slow=head;
        Node*fast=head, *curr=NULL;
        while(fast && fast->next)
        {
            curr=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        curr->next=slow->next;
        return head;
    }
int main()
{
        Node *a=new Node(10);
    Node * b=new Node(20);
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
    Node *ans=deleteMiddle(a);
}