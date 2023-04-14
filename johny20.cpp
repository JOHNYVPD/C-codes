 #include <iostream>
 #include <cmath>
 using namespace std;
 int main()
 {
 double a, b, c, d, x, R, I;
 cout<<"According to this format of Quadratic Equation: ax^2 + bx + c = 0"<<endl;
 cout<<"Insert the values of a, b and c \n"<<endl; cin>>a>>b>>c;
 d=(b*b)-(4*a*c);
 cout<<"------------------------------------------------------------\n\n\n";
 if(d<0)
 {
 cout<<"The roots are complex number \n\n";
 R=-b/(2*a);
 I=sqrt(-d)/(2*a);
 cout<<"The first complex root of X is: "<<R<<" + "<<I<<"i"<<endl;
 I=sqrt(-d)/(2*a);
 cout<<"The second complex root of X is: "<<R<<" - "<<I<<"i"<<endl;
 }
 else if(d==0)
 {
 cout<<"The roots are real and same \n\n";
 d=sqrt(d);
 x=(-b+d)/(2*a);
 cout<<"The roots of X are X1 = X2 = "<<x<<endl;
 }
 else
 {
 cout<<"The roots are real and different \n\n"<<endl;
 d=sqrt(d);
 x=(-b+d)/(2*a);
 cout<<"The first value of x is: "<<x<<endl;
 x=(-b-d)/(2*a);
 cout<<"The second value of x is: "<<x<<endl;
 }
 return 0;
 }
