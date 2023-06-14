#include<bits/stdc++.h>
using namespace std;
int n = 10;
class queuei{
    public:
        int front = -1;
        int rear = -1;
        int arr[100];

    void push(int x)
    {
        if(rear == n-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = x;

        if(front == -1)
        {
            front++;
        }
    }
    void pop()
    {
        if(front == -1 || front > rear)
        {
            cout<<"Queue Underflow"<<endl;
            return;
        }
        front++;
    }
    int top()
    {
        if(front == -1 || front>rear)
        {
            cout<<"No element present"<<endl;
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if(front == -1 || front>rear)
        {
            cout<<"No element present"<<endl;
            return true;
        }
        return false;
    }
};
int main()
{
    queuei q;
    q.push(5);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(6);
    cout<<q.top()<<endl;
    return 0;
}