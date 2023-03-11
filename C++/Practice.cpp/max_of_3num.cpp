//Maximum of 3 number using cpp whit function.
#include<iostream>
using namespace std;
int maximum(int a, int b, int c){
    int max;
    if (a>=b && a>=c)
    {
        max=a;
    }
    else if (b>=a && b>=c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    return max;
}
int main()
{
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;
    
    int b;
    cout<<"Enter the value of b: ";
    cin>>b;
    
    int c;
    cout<<"Enter the value of c: ";
    cin>>c;

    int largest=maximum(a,b,c);
    cout<<"The largest among 3 number is,"<<largest;
    
    return 0;
}
