#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
   double num1, num2;
   cout<<"Enter two decimal number" <<endl;

   cin>>num1>>num2;
   double add = num1+num2;
   cout<<setw(20)<<"addition"<<add<<endl;

   cin>>num1>>num2;
   double sub = num1-num2;
   cout<<setw(20)<<"subraction"<<sub<<endl;

   cin>>num1>>num2;
   double mult = num1*num2;
   cout<<setw(20)<<"multiplication"<<mult<<endl;






}
