
//students marks
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int student=5;
    int paper=3;
    int mark[student][paper];
    for(int s=0;s<student;s++)
    {
        for(int p=0;p<paper; p++)
        {            cout<<"Enter mark for student "<<s+1<<" paper "<<p+1<<" : ";
            cin>>mark[s][p];
        }
    }
    cout<<setw(30)<<"Paper"<<endl<<setw(25)<<"1"<<setw(8)<<"2"<<setw(8)<<"3"<<endl;
    for(int s=0;s<student;s++)
    {
         cout<<"\nStudent "<<s+1<<"       ";
    for(int p=0;p<paper;p++)
        cout<<setw(8)<<mark[s][p];
    }
       cout<<endl;
  }
