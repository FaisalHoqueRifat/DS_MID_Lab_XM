#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the how many digit you want to add :- "<<endl;
    cin>>n;
    int data[n+1];
    for(int i = 1; i<=n; i++)
    {
        cin>>data[i];
    }
    int temp = 0;
    for(int k = 1; k<n-1; k++)
    {
        int ptr = 1;
        while(ptr<=n-k)
        {
            if(data[ptr] > data[ptr+1])
            {
                temp = data[ptr];
                data[ptr] = data[ptr+1];
                data[ptr+1] = temp;
            }
            ptr++;
        }
    }
    for(int i = 1; i<=n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}