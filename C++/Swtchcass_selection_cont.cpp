#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age: "<<endl;
    cin>>age;
    //Selection control structure: Switch case statement;
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22 "<<endl;
        break;
    default:
        cout<<"No spacial case"<<endl;
        break;
    } 
    cout<<"Exit"; //Its happning because you use 'break'
    
    return 0;
}
 