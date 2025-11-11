#include<iostream>
using namespace std;
int main()
{
 //3.ascending order(Dicisions)
    int a, b, c;
    cout<<"Enter three number a,b and c.";
    cin>>a>>b>>c;
    if(a<b and a<c)
    {
        if(b<c)
        {
            cout<<"In ascending order \n a,b,c. ";
        }
        else cout<<"In ascending order \n a,c,b. ";

    }
    else
    {
        if(b<a and b<c)
        {
            if(a<c)
            {
                cout<<"In ascending order \n "<<b<<","<<a<<","<<c<<".";
            }
            else cout<<"In ascending order \n "<<b<<","<<c<<","<<a<<".";
        }
        else
        {
            if(c<b and c<a)
            {
                if(b<a)
                {
                    cout<<"In ascending order \n "<<c<<","<<b<<","<<a<<".";
                }
                else cout<<"In ascending order \n "<<c<<","<<a<<","<<b<<".";
            }
        }
    }
    }
