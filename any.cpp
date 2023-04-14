#include<iostream>
using namespace std;
void my(char*,const char *);
int main()
{
    char string1[80],string2[80];
    cout<<"enter two";
    cin>>string1>>string2;
    my(string1,string2);
    cout<<string1<<endl;
    return 0;
}
void my(char*s1,const char *s2)
{
    while(s1!='\0')
        s1++;
    for(;*s1=*s2;s1++,s2++)
    ;

}


