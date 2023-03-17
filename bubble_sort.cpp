#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the how many digit you want to add :- "<<endl;
    cin>>n;
    int data[n];
    for(int i = 0; i<n; i++)
    {
        cin>>data[i];
    }
    int temp = 0;
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(data[i] > data[j])
            {
                temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
}