#include<iostream>
using namespace std;
struct employee
{
    /* data */
    int eId;
    char favChar;
    float salary;

};

int main()
{
    struct employee andrew;
    andrew.eId = 1;
    andrew.favChar ='A';
    andrew.salary = 120000000;
    cout<<"My salary... "<<andrew.salary<<endl;
    cout<<"My favourite charecter...."<<andrew.favChar<<endl;
    cout<<"My Id is..."<<andrew.eId<<endl;
    
        
    
    
    return 0;
}
