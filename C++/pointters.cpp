#include<iostream>
using namespace std;
int main()
{
    int marks[] = { 56,78,99,69,80};
    

    // Pointers & arryays;
    int*p = marks;

    cout<<"The value of marks[0]...."<<*p<<endl;
    cout<<"The value of marks[1]...."<<*(p+1)<<endl;
    cout<<"The value of marks[2]...."<<*(p+2)<<endl;
    cout<<"The value of marks[3]...."<<*(p+3)<<endl;
    cout<<"The value of marks[4]...."<<*(p+4)<<endl;
    

    
    return 0;
}
