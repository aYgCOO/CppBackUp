//Now we creating a function using cpp.
//We creating the function in the global veriable either we can't use it.
#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;

    cout<<"Enter the value of b :";
    cin>>b;
    int c=sum(a,b);
    
    cout<<"The sum of a+b :"<<c;
    return 0;
}

