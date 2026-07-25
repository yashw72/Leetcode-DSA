#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* next;
        
        node(int val)
        {
            data=val;
            next=NULL;
        }
};

class list
{
    node *head;
    node *tail;

    public:
    list()
    {
        head=tail=NULL;
    }
    void push_front(int val)
    {
        node *newnode=new node(val);
        if(head==NULL)
        {
            head=tail=newnode;
            return;           
        }
        else{
            newnode->next=head;
            head=newnode;
        }
    }

    void push_back(int val)
    {
         node* newnode=new node(val);
         if(head==NULL)
         {
            head=tail=newnode;
            return;
         }
         else
        {
            tail->next=newnode;
            tail=newnode;
        }
    }
    void pop_front()
    {
        if(head==NULL)
        {
            return;
        }
        else{
            node*temp=head;
            head=temp->next;
            temp->next=NULL;
            delete temp;

        }
    }
    void pop_back()
    {
        if(head==NULL)
        {
            return;
        }
        else
        {
            node*temp=head;
            while(temp->next != tail)
            {
                temp=temp->next;
            }
            temp->next=NULL;
            delete temp;

        }
    }

    void display()
    {
        node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main()
{
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);
    ll.push_back(5);

    ll.pop_front();
    ll.pop_back();
    ll.display();

    return 0;
}
