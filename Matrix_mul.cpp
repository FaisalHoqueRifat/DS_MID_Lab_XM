#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the frist matrix row and colomn :- " << endl;
    cin >> r1 >> c1;
    cout << "Enter the Second matrix row and colomn :- " << endl;
    cin >> r2 >> c2;
    int a[r1][c1], b[r2][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            b[i][j] = 0;
        }
    }
    cout<<"Enter the a matrix :- "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Enter the matrix b :- "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>b[i][j];
        }
    }
    if (c1 == r2)
    {
        int c[r1][c2];
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                for(int k = 0; k < r2; k++)
                {
                    c[i][j] += a[i][k]*b[k][j];
                }
            }
        }
        cout<<"The matrix is :-"<<endl;
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"Multiplication is not possible"<<endl;
    }
    return 0;
}