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
    int m, k;
    cout<<"Enter the element to be inserted in the array : "<<endl;
    cin>>m;
    cout<<"Enter the location where element "<<m<<" is to be inserted : "<<endl;
    cin>>k;
    for(int i = n-1; i>=k-1; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[k-1] = m;
    n++;
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}