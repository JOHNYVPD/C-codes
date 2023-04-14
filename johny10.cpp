#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main ()
{
   double L,W;  // L=length,W=width
   cout<< "Enter is length and width"<<endl;
   cin>>L>>W;

   double A = L*W;
   cout<<setw(40) <<"Rectangle of area is A = "<<A<<endl;

   double p = 2*(L+W);
   cout<<setw(40) <<"Rectangle of perimeter is P = "<<p<<endl;

   getch();

}

