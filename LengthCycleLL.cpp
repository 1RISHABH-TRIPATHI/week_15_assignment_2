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
class ListNode{
    public:
    Node* head;
    Node* tail;
    int  size=0;
    ListNode()
    {
        head=tail=NULL;
        size=0;
    }
    void AddHead(int val)
    {
        Node *temp=new Node(val);
        if(size==0) head=tail=temp;
        else
        {
            temp->next=head;
            head=temp;
        }
        size++;
    }
    void display_list()
    {
        Node *temp=head;
        while(temp!=NULL)
        {
            cout<<temp->vaL<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
     void insertAtEnd(int val)
        {
            Node * temp=new Node(val);
            if(size==0) head=tail=temp;
            else 
            {
                tail->next=temp;
                tail=temp;
            }
            size++;
        }
        void cycle(int idx)
        {
            
            Node * temp=head;
            while(idx--)
            {
                temp=temp->next;
            }
            temp->next=head->next;
        }
        int cycleCount()
        {
            Node* slow=head;
            Node* fast=head;
            bool flag=false;
            while(fast && fast->next)
            {
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast) 
                {
                    flag=true;
                    break;
                }
            }
            if(flag==false) return 0;
            slow=slow->next;
            int co=0;
            while(slow!=fast)
            {
                slow=slow->next;
                co++;
            }
            return co;
        }
};
int main()
{
    ListNode a;
    a.AddHead(12);
    a.insertAtEnd(34);
    a.AddHead(13);
    a.insertAtEnd(24);
    a.AddHead(23);
    a.insertAtEnd(44);
    a.AddHead(11);
    a.insertAtEnd(84);
    a.AddHead(73);
    a.insertAtEnd(27);
    a.display_list();
    a.cycle(6);
    cout<<a.cycleCount();
}
