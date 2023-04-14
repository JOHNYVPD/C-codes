#include<iostream>
using namespace std;
int main()
{
    int t[100],sum=0;
    double avg;
    int i=0;
    while(i<=10)
    {
        cin>>t[i];
        i++;
    }
    while(i<=10)
    {cout<<"temp"<<t[i]<<endl;
    i++;}
    for(int i=0;i<=10;i++)
    {
        sum+=t[i];}
        cout<<sum;
        avg=sum/10;
        cout<<avg;


}
