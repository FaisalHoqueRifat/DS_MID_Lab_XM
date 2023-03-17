#include<bits/stdc++.h>
using namespace std;
class stack1
{
public:
    char ch[20];
    int top = -1;
    int limit = 20;
    void push(char c)
    {
        if(top>limit) cout<<"stack overflow"<<endl;
        else
        {
            top++;
            ch[top] = c;
        }
    }
    char pop()
    {
        if(top==-1) cout<<"stack underflow"<<endl;
        else
        {
            char item = ch[top];
            top = top-1;
            return(item);
        }
    }
    int top1()
    {
        return top;
    }
    void print()
    {
        for(int i = 0; i<top; i++)
            cout<<ch[i]<<" "<<endl;
    }

};

int is_operator(char symbol)
{
    if(symbol == '^' || symbol == '*' || symbol == '/' || symbol == '+' || symbol =='-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int precedence(char symbol)
{
    if(symbol == '^')
    {
        return(3);
    }
    else if(symbol == '*' || symbol == '/')
    {
        return(2);
    }
    else if(symbol == '+' || symbol == '-')
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int main()
{
    string infix, postfix;
    cin>>infix;
    stack1 st;
    st.push('(');
    infix.push_back(')');
    char item,x;
    int i=0;
    item=infix[i];
    while(item != '\0')
    {
        if(item == '(')
        {
            st.push(item);
        }
        else if( isdigit(item) || isalpha(item))
        {
            postfix.push_back(item);
        }
        else if(is_operator(item) == 1)
        {
            x=st.pop();
            while(is_operator(x) == 1 && precedence(x)>= precedence(item))
            {
                postfix.push_back(x);
                x = st.pop();
            }
            st.push(x);

            st.push(item);
        }
        else if(item == ')')
        {
            x = st.pop();
            while(x != '(')
            {
                postfix.push_back(x);
                x = st.pop();
            }
        }
        else
        {
            printf("\nInvalid infix Expression.\n");
        }
        i++;

        item = infix[i];
    }
    cout<<postfix<<endl;

    return 0;
}
