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
Node* mergeInBetween(Node* list1, int a, int b, Node* list2) {
        Node* temp=list1;
        a--;
        while(a--)
        temp=temp->next;
        b++;
        Node* temp1=list1;
        while(b--) temp1=temp1->next;
        Node* curr=list2;
        while(curr->next!=NULL) curr=curr->next;
        temp->next=list2;
        curr->next=temp1;
        return list1;
    }
int main()
{
    // list-1
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
    // list-2
    Node * ab=new Node(100);
    Node * bc=new Node(200);
    Node * cd=new Node(300);
    Node * de=new Node(400);
    ab->next=bc;
    bc->next=cd;
    cd->next=de;
    Node *ans=mergeInBetween(a,3,6,ab);

}