#include<bits/stdc++.h>
using namespace std;

int main()
{
    string p, t;
    cin>>p>>t;
    int r, s, k, l, maxi, index;
    r = p.length();
    s = t.length();
    maxi = s-r;
    k = 0;
    while(k<=maxi)
    {
        for(l = 0; l<r; l++)
        {
            if(p[l] != t[k+l])
            break;
        }
        if(l==r)
        {
            index = k;
            break;
        }
        else
        k++;
    }
    if(k>maxi)
    {
        index = -1;
    }
    cout<<"P :- "<<p<<endl;
    cout<<"T :- "<<t<<endl;
    if(index != -1)
    {
        cout<<"Index of P in T is :- "<<index<<endl;
    }
    else
        cout<<"P does not exist in T"<<endl;
    return 0;
}