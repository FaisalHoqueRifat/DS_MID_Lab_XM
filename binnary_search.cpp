#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cout<<"Enter how many element you want to add :- "<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search :- "<<endl;
    cin>>x;
    sort(arr.begin(), arr.end());
    int l = 0, r = n, mid = 0;
    bool flag = false;
    while (l<=r)
    {
        mid = (l+r)/2;
        if(arr[mid] == x)
        {
            flag = true;
            break;
        }
        else if(arr[mid] < x)
        {
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    if(flag)
    {
        cout<<x<<" is found in Array"<<endl;
    }
    else
    {
        cout<<x<<" is not found in Array"<<endl;
    }
    return 0;
}