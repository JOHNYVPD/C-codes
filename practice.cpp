#include<iostream>
using namespace std;
int main ()
{int j,i ,k,r,s,o;

    for(int r=1;r<6;r++)
    {
        for(int s=4;s>=r;s--)
            cout<<" ";
        for(int o=1;o<=2*r-1;o++)



                cout<<"*";cout<<endl;
            }
            for(int i=5;i>0;i--)
    {
        for(int j=0;j<=5-i;j++)
            cout<<" ";
        for(int k=1;k<=2*i-1;k++)



                cout<<"*";cout<<endl;
            }
        }


