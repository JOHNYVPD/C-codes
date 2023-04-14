#include<iostream>
#include<cstring>
using namespace std;
int main ()
{
    char str[80];
    cin.getline(str,80);
    int v=0,c=0,s=0;
    int t=strlen(str);
    for(int i=0;i<t;i++)
    {
        if(str[i]== 'a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            v++;
        }
        else if(str[i]==' ')
        {
            s++;
        }
        else{c++;}
    }
    cout<<"vowels ="<<v<<endl;
    cout<<"consonants ="<<c<<endl;

}
