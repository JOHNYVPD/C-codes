#include<iostream>
using namespace std;
int mult(int,int);
int main()
{
    int n,i;
    cout<<"enter"<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    cout<<n<<" * "<<i<<"="<<mult(n,i)<<endl;
    return 0;
}
int mult(int x,int y)
{
    return x*y;

}
