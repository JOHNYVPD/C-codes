#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[]="ABCD";
    cout<<"strlen ("<<a<<")="<< strlen(a)<<endl;
    cout<<"strlen (\"\")="<< strlen("")<<endl;

    char buffer [50];
    cout<<"enter string :";
    cin.getline(buffer,50);
    cout<<"strlen ("<<buffer<<")="<< strlen(buffer)<<endl;
}
