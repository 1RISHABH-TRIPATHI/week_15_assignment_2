#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node {
    public:
        int val;
        Node *next;
        Node()
        {
            this->val=0;
            this->next=NULL;
        }
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
        Node(int val, Node *next)
        {
            this->val=val;
            this->next=next;
        }
};
Node* swapNodes(Node* head, int k) {
        k--;
        Node*p=head;
        while(k--)
        p=p->next;
        Node *p1=p->next;
        Node *p2=head;
        while(p1!=NULL && p1->next!=NULL) 
        {
            p1=p1->next;
            p2=p2->next;
        }
        p1=NULL;
        swap(p->val,p2->next->val);
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
    Node *ans=swapNodes(a,2);
}