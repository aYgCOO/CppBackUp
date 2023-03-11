//Factorial number 5 factorial-> (5*4*3*2*1)=120 
//Facrtorial formula in programming -> factorial = factorial * i.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    int factorial=1;
    
    if (num<0)
    {
        cout<<"Please enter a positive number: ";
    }
    else if (num==0)
    {
        cout<<"The factorial 0 is,1";
    }
    else
    {
        for (int i=1; i<=num; i++)
        {
            factorial=factorial*i;
        }
        
    }
    cout<<"The factorial of this_"<<num<<"_is -> "<<factorial;
    
    return 0;
}
