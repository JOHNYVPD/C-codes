#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[]="ABCD";
    char s2[]="XYZW";
    cout<<"before strcat (s1,s2):\n";
    cout<<"\t s1=["<<s1<<"],length="<<strlen(s1)<<endl;
    cout<<"\t s1=["<<s2<<"],length="<<strlen(s2)<<endl;
    strncpy(s1,s2,3);
    cout<<"after strcat (s1,s2):\n";
    cout<<"\t s1=["<<s1<<"],length="<<strlen(s1)<<endl;
    cout<<"\t s2=["<<s2<<"],length="<<strlen(s2)<<endl;
    cout<<"s1="<<s1<<endl;
}



