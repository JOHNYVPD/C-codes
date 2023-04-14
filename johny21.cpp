#include<iostream>
using namespace std;
int main ()
{
    int bound;
    cout<<"enter the integer number"<<endl;
    cin>>bound;
    double sum =0;
    int i=0,j=0;
    while(true)
{
    sum+=1.0/i++;
    j=j+1;
    if(j>bound)break;
}
    cout<<"the sum of the first"<<j<<endl<<"reciprocal is "<<sum<<endl;




}

