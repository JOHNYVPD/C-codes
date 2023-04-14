#include <iostream>
#include <cmath>
using namespace std;
 int main()
 {
    long double PMT, P, t, r, n, d, f;

    cout<<"\nFor Your Corresponding Loan, Please Give The Information Below\n\n";
    cout<<"\tThe Principal or Amount of Loan Taken in BDT: ";
    cin>>P;
    cout<<"\tThe Length of Time in Year: ";
    cin>>t;
    cout<<"\tThe Period or Number of Payments Per Year: ";
    cin>>n;
    cout<<"\tThe Interest Rate in Percent: ";
    cin>>r;
    d=r/(100*n);
    f=1-pow((1+d),(-n*t));
    PMT=(P*d)/f;
    cout<<"\n\nYour Total Payment Will Be: "<<PMT*n*t<<" BDT"<<endl;
    cout<<"The Regular Payment Is: "<<PMT<<" BDT"<<endl;


    return 0;
 }
