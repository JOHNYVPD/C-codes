#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the integer num"<<endl;
    cin>>n;
    int i=1;

    while(i<=n)

    {   sum+=i;
        i=i+2;

    }
    cout<<"the total sum = "<<sum;
    return 0;
}
