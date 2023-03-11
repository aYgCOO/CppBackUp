//Now we try to cheak the condition of cpp.
//Using if else statement.
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter your age: ";
    cin>>a;
    if (a<18){

        cout<<"You are not eligible for adult industry."<<endl;

    }
    else if (a==18){

        cout<<"You are now eligible for adult industry but its your risk."<<endl;
    }
    else{

        cout<<"You are perfect for adult industry.";

    }
    return 0;
}
