#include<iostream>
using namespace std;
int main()
{
    int n,r =0;
    cout <<"enter the any positive number"<<endl;
    cin>>n;
    int i = 2;
    while(i<n)
    {
        if(n%i==0)
        {
            r++;
            break;

        }
        i++;
    }
        if (r==0)
            cout<<"prime number";
        else
            cout<<"not prime number";


}
