#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"select your age group:"<<endl;
    cout<<"\t[1] age 0-18"<<endl;
    cout<<"\t[2] age 18-65"<<endl;
    cout<<"\t[3] age 65-120"<<endl;
    cin>>a;
    switch(a)
    {
        case 1: cout<<"you are child";
        break;
        case 2: cout<<"you are an adult";
        break;
        case 3: cout<<"your are a senior citizen";
        default: cout<<"invalid choice"<<endl;
    }
    return 0;
}
