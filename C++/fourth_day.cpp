#include<iostream>
using namespace std;
    
int main()
{
    // int a=45;
    // cout<<"The value of 'a' is."<<a<<endl;
    // a=65;
    // cout<<"Also we can change the value of 'a'; the new value is."<<a<<endl;
    const float x = 4.11;
    cout<<"The value of 'x' is."<<x<<endl;
    x = 3.11;
    // When you run the program you will get an error,because 'x' is constant. 
    cout<<"The value of x is not changed because we the 'const'"<<x<<endl;
    return 0;
}
