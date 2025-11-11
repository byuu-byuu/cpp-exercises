#include<iostream>
using namespace std;
int main()
{
     //Switch month(decisions)
    int n;
    cout<<"Input a month(1-12): ";
    cin>>n;
    switch(n)
    {

        case 1: cout<<"This month is January with 31 days.";break;
        case 2: cout<<"This month is February with 28  days.";break;
        case 3: cout<<"This month is March with 31 days.";break;
        case 4: cout<<"This month is April with 30 days.";break;
        case 5: cout<<"This month is May with 31 days.";break;
        case 6: cout<<"This month is June with 30 days.";break;
        default : cout<<"Invalid Input.";
}
return 0;
}

