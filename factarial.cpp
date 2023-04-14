#include<iostream>
using namespace std;
int fact (int ,int);
int main()
{
    int n,f;
    cout<<"any num"<<endl;
    cin>>n;
    for(int i=2;i<=n;i+=2)
        cout<<i<<"!="<<fact(n,f)<<endl;
    return 0;
}
int fact (int x,int f)
{
    f=1;
    for(int j=2;j<=x;j+=2)
    {
        for( int k=2;k<=j;k++)
        {
            cout<<f;
            f=f*k;
        }
    }

}
