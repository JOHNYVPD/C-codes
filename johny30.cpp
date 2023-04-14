#include<iostream>
using namespace std;
int main()
{
    int i=1,sing=1,sum=0,n;
    cout << "enter the number"<<endl;
    cin>>n;
    while(i+2<n)
    {
        int j=i*i;int temp=sing*j;sum+=temp;sing=1*sing;
    }
    cout<<"sum is :"<<sum;
}
