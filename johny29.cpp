#include<iostream>
using namespace std;
int main ()
{
    int n,r,c;
    cout<<"Enter the integer number"<<endl;
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
          cout<<" ";
        }

        for(c=1;c<=r;c++)
           {
             cout<<c;
             }
           cout<<endl;
    }
}
