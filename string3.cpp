#include<iostream>
#include<cstring>
using namespace std;
char stringcopy(char*s1,char*s2)
{
    char*p=s1;
    for(*s2;p++;s2++)
       {
           *p=*s2;}
    *p='\0';
    return s1;
}
void main()
{
    char a1[]="ABCD";
    char a2[]="XYZ";
    stringcopy(a1,a2);
    cout<<a1<<endl;
    return 0;
}
