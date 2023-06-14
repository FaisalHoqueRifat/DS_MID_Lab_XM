#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
        ~node()
        {
            if(this->next != NULL)
            {
                delete next;
                this->next = NULL;
            }
        }
};
node* head = NULL;
void insertAtHead(node* &head, int d)
{
    node* n = new node(d);
    n->next = head;
    head = n;
}
void insertAttail(node* &head, int d)
{
    node* tail = head;
    while(tail->next)
    {
        tail = tail->next;
    }
    node* n = new node(d);
    tail->next = n;
    tail = n;
}
void insertAtposition(node* &head, int position, int d)
{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL)
    {
        insertAttail(head, d);
        return;
    }
    node* n  = new node(d);
    n->next = temp->next;
    temp->next = n;
}
void print(node* &head)
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void deletenode(node* head, int position)
{
    if(position ==  1)
    {
        head = head->next;
    }
    else
    {
        node* curr = head;
        node* prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    while (1)
    {
        cout<<"1. Insert element in head"<<endl;
        cout<<"2. Insert element in tail"<<endl;
        cout<<"3. Insert element in position"<<endl;
        cout<<"4. Delete element in position"<<endl;
        cout<<"5. Print the link list"<<endl;
        cout<<"6. Break"<<endl;
        int option;
        cin>>option;
        if(option == 1)
        {
            system("cls");
            cout<<"Enter the value : ";
            int d;
            cin>>d;
            insertAtHead(head, d);
        }
        else if(option == 2)
        {
            system("cls");
            cout<<"Enter the value : ";
            int d;
            cin>>d;
            insertAttail(head, d);
        }
        else if(option == 3)
        {
            system("cls");
            cout<<"Enter the value : ";
            int d;
            cin>>d;
            cout<<"Enter the position : ";
            int position;
            cin>>position;
            insertAtposition(head, position, d);
        }
        else if(option == 4)
        {
            system("cls");
            cout<<"Enter the position want to Delete : ";
            int position;
            cin>>position;
            deletenode(head, position);
        }
        else if(option == 5)
        {
            system("cls");
            print(head);
        }
        else
        {
            break;
        }

    }
    
}