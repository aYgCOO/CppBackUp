#include<iostream>
#include<iomanip>
using namespace std;
    
int main()
{
    int a=56 , b=82 , c=90 ;
    cout<<"The value of 'a' is."<<setw(5)<<a<<endl;
    cout<<"The value of 'b' is."<<setw(5)<<b<<endl;
    cout<<"The value of 'c' is."<<setw(5)<<c<<endl;

    cout<<"The value of 'a' is."<<a<<endl; //(Without setw)
    cout<<"The value of 'b' is."<<b<<endl; //(Without setw)
    cout<<"The value of 'c' is."<<c<<endl; //(Without setw)
    return 0;
}
