#include<bits/stdc++.h>

using namespace std;

//creating node
class node
{
public:
    int data = 0;
    node *link = 0;
    node(int data = 0)
    {
        this->data= data;
    }
};

//Insert at head
void add_head(node *start,int index = 0)
{
    system("cls"); 
    int data;
    cout<<"Enter node data : ";
    cin>>data;
    node *n = new node(data);
    if(index == 0 && start ->link != 0)
    {
        n->link = start->link;
        start->link = n;
    }
    else
    {
        if(start->link == 0 && index != 0)
        {
            cout<<"position not found\n";
            return;
        }
        start->link = n;
    }

}

//insert at tail
void add_tail(node *start)
{
    system("cls");
    if(start->link == 0)
    {
        add_head(start);
        return;
    }
    int data;
    cout<<"Enter node data : ";
    cin>>data;
    node *n = new node(data);
    node *prev = start->link;
    node *ptr=start->link;
    while(ptr!=0)
    {
        prev = ptr;
        ptr =   ptr->link;
    }
    prev->link = n;
}


//insert after any index
//index = 0 means ,insert at head
void add (node *start,int index)
{

    node *ptr=start->link;
    int in = 0;
    node *save = start->link;
    if(start->link == 0 || index == 0)
    {
        add_head(start,index);
    }
    else
    {
        int data;
        cout<<"Enter node data : ";
        cin>>data;
        node *n = new node(data);
        while(ptr!= 0)
        {
            in+=1;
            if(in == index)
            {
                break;
            }
            ptr = ptr->link;
        }
        if(in != index)
        {
            cout<<"position not found\n";
            return;
        }
        else
        {
            n->link=ptr->link;
            ptr->link= n;
        }
    }
}


//show full list
void show (node * start)
{
    if(start->link == 0)
    {
        cout<<"Empty\n\n";
        return;
    }
    cout<<"The list is-\n";
    node * ptr = start->link;
    while(ptr != 0)
    {
        cout<<ptr->data<<" ";
        ptr= ptr->link;
    }
    cout<<endl;
}

//delete add head
void DELETE_head(node *start)
{
    if(start->link == 0)
    {
        cout<<"underflow\n";
        return;
    }
    start->link=start->link->link;
}

//delete at tail
void DELETE_tail(node *start)
{
    node * ptr = start->link;
    node *prev = start->link;

    if(start->link == 0)
    {
        cout<<"underflow\n";
        return;
    }
    else if(ptr->link == 0)
    {
        start->link = 0;
        return;
    }
    while(ptr->link != 0)
    {
        prev = ptr;
        ptr = ptr->link;
    }
    prev->link =0;
    return;
}

//delete any index
void DELETE(node *start,int index)
{
    if(start->link == 0)
    {
        cout<<"underflow\n";
        return;
    }
    if(index == 1)
    {
        DELETE_head(start);
        return;
    }
    else
    {
        int in = 0;
        node * ptr = start->link;
        node *prev = start->link;
        while(ptr!= 0)
        {
            in+=1;
            if(in == index)
            {
                break;
            }
            prev = ptr;
            ptr = ptr->link;
        }
        if(in != index)
        {
            cout<<"position not found\n";
            return;
        }
        else
        {
            prev->link=ptr->link;
        }
    }
}

int main()
{
    node *start= new node();

    int choice;
    for(;;)

    {
        cout<<"Enter 1 for insertion\nEnter 2 for Delete\nEnter 3 for show list\n:";
        cin>>choice;
        if(choice == 1)
        {
            system("cls");
            int index;

            cout<<"Enter 1 for insert at head\nEnter 2 for insert at tail\nEnter 3 for insert at any index\n:";
            int c;
            cin>>c;
            if(c == 1)
                add_head(start);
            else if( c== 2)
                add_tail(start);
            else if(c == 3)
            {
                cout<<"enter index: ";
                cin>>index;
                add(start,index);
            }
        }
        else if(choice == 2)
        {
            int index;
            cout<<"Enter 1 for DELETE at head\nEnter 2 for DELETE from tail\nEnter 3 for DELETE at any index\n:";
            int c;
            cin>>c;
            if(c == 1)
                DELETE_head(start);
            else if( c== 2)
                DELETE_tail(start);
            else if(c == 3)
            {
                cout<<"enter index: ";
                cin>>index;
                DELETE(start,index);
            }
//            DELETE(start);
        }
        else if(choice == 3)
        {
            show(start);
        }
        else
        {
           cout<<"Invalid input\n";
        }

    }
}