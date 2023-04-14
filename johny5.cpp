#include <iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
    int num1, num2;

    cout <<"Enter two numbers:"<<endl;
    cin  >> num1>>num2;

    int sum= num1 + num2;
    cout << setw(20)<<"Sum is :" <<sum <<endl;

    int sub= num1 - num2;
    cout << setw(20)<<"Subraction is :" <<sub <<endl;

    int mult = num1 * num2;
    cout << setw(20)<<"Multiplication is :" <<mult <<endl;

    int div= num1 / num2;
    cout << setw(20)<<"Division is :" <<div <<endl;

    getch();
}

