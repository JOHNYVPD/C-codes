#include<iostream>
using namespace std;
int main()
{
    int a=5000,b=10000,c=20000,d=50000,bill,bill1,bill2;
    double n,t;
    cout<<"enter the salary"<<endl;
    cin>>n;
    bill1=a<b?t=n*.1:t=n;
    bill2=c<d?t=n*.3:t=n*.2;
    bill=(bill1<bill2)?bill1:bill2;
    cout<<n-t;


}
