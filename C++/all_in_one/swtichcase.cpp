//Swtich case is a mini from of a 'if else statement'.
//Create a calculator using swtich case in cpp.
#include<iostream>
using namespace std;
int main()
{
    int r;
    int num1;
    cout<<"Enter the first number: ";
    cin>>num1;
    char oop;
    cout<<"Choice a operator: ";
    cin>>oop;
    int num2;
    cout<<"Enter the second number: ";
    cin>>num2;

    switch (oop)
    {
    case '+':
        r=num1+num2;
        break;
    case '-':
        r=num1-num2;
        break;
    case '*':
        r=num1*num2;
        break;
    case '/':
        r=num1/num2;
        break;
    
    default:
        cout<<"Error! Please choice a valid operator. ";
        break;
    }
    cout<<"The_"<<num1<<oop<<num2<<"_=,"<<r;
    
    return 0;
}
