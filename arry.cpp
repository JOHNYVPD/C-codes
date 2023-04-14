#include<iostream>
using namespace std;
int main()
{
    int n,i,j,b,a[10];
    cout<<"enter size of arry"<<endl;
    cin>>n;
    cout<<"enter"<< n<< " element"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    cout<<"Ascending numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
       for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
        }
    }
    cout<<"Descending numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }
}
