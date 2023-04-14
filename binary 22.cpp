#include<iostream>
using namespace std;
int convert(int , int);
int main()
{
    int n;
    cout<<"give the dec number"<<endl;
    cin>>n;
    if(n<=15)
    {


        cout<<"binary numner ="<< convert(n ,2)<<endl;
        cout<<"octal numner ="<< convert(n ,8)<<endl;
        cout<<"hexadecimal numner ="<< convert(n ,16)<<endl;
    }
    else{cout<<"invalid"<<endl;}
    return 0;
}
int convert(int n,int b)
{
    int y=n%b;
    if(n==0)
        return n;
        convert(n/b,b);
    if(y<10)
    {
        cout<<y;
    }
    else{cout<<y-10+11;}

}
