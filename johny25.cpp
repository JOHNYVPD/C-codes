#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter the any positive number"<<endl;
    cin>>n;
    for(int i = 1; i<=n;i++)
        {
            f*=i;
            }
    cout<<"factirial number "<< n << "! = "<<f<<endl;

}
