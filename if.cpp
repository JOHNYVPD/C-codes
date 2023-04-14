#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,m,a;
    cout<<"the vehicle name"<<endl;
    cin>>a;
    cout<<"entry time "<<endl;
    cin>>n;
    cout<<"out time"<<endl;
    cin>>m;
    if(a==1 )
    {

        if(n<=8)
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 20";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 30";
            }
            else
            {
                cout<<"ur bill 50";
            }}
            else if(n>8&&n<=17)
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 25";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 35";
            }
            else
            {
                cout<<"ur bill 55";
            }
        }
        else
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 15";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 25";
            }
            else
            {
                cout<<"ur bill 45";
            }}
    }
     else if(a==2 )
    {

        if(n<=8)
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 30";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 40";
            }
            else
            {
                cout<<"ur bill 60";
            }}
            else if(n>8&&n<=17)
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 35";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 45";
            }
            else
            {
                cout<<"ur bill 65";
            }
        }
        else
        {
            if((m-n)<=1)
            {
                cout<<"ur bill 25";
            }
            else if((m-n)<=2)
            {
                cout<<"ur bill 35";
            }
            else
            {
                cout<<"ur bill 55";
            }}

    }
}
