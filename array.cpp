#include<iostream>
using namespace std;
int main()
{
    int i,j,s1=0,s2=0,s3=0,a[3][3];
    cout<<"enter the number"<<endl;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
    cout<<"enter the matrix"<<endl;
     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        cout<<a[i][j];
        if(j==2)cout<<endl;
    }
    cout<<" the matrix"<<endl;
     for(i=0;i<3;i++)
        for(j=2;j>=0;j--)
    {
        cout<<a[i][j];
        if(j==0)cout<<endl;
    }
     for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(i==0)
            s1+=a[i][j];
        }cout<<"sum of the row"<<s1<<endl;
        for(i=1;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(i==1)
            s2+=a[i][j];
        }cout<<"sum of the row"<<s2<<endl;
        for(i=2;i<3;i++)
        for(j=0;j<3;j++)
        {
            if(i==2)
            s3+=a[i][j];
        }cout<<"sum of the row"<<s3<<endl;


}
