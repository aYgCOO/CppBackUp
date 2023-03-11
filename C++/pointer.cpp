#include<iostream>
using namespace std;
int main()
{
    //Pointer of a program. 
    int a=39;
    int* b= &a;
    cout<<"Print a:"<<b<<endl;
    cout<<"The value at address is."<<*b<<endl;
    //& -----> This called Address of a program.
    //()*------> This is called Dereferance of a program.
    //*()------> This is called value at address of the  dereferance of a program.

    //Pointer to pointer.
    int**c= &b;
    cout<<"The address of b is."<<&b<<endl;
    cout<<"The address of b is."<<c<<endl;
    cout<<"The value at address c is."<<*c<<endl;
    cout<<"The value at address value_at_(value_at[c]) is."<<**c<<endl;
    return 0;
}
