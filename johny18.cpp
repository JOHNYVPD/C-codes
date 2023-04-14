#include<iostream>
using namespace std;
int main()
{
  int age;
  cout <<" enter your age:"<<endl;
  cin>>age;
  if(age<18)
        cout<<"you are a child"<<endl;
  else if (age<65)
    cout<<"you are an adult"<<endl;
  else if (age>65)
    cout <<"you are a senior citizen"<<endl;
  else
    cout<<" you are most senior person"<<endl;

  return 0;


}
