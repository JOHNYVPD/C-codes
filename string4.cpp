#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1="hello";
    string s2="world";
    string s3;int len;
    s3=s1;
    cout<<"s3="<<s3<<endl;
    s3=s1+s2;
    cout<<"s3="<<s3<<endl;
    len=s3.size();
    cout<<"s3 len="<<len<<endl;
}

