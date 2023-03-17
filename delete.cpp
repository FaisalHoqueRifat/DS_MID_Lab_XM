#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100];
    int n;
    cout<<"Enter the how many value you want to add :- "<<endl;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the location where element is to be deleted : "<<endl;
    cin>>k;
    for(int i = k-1; i<n; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}