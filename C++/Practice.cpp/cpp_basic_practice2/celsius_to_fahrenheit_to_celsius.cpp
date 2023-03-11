//Write a program to convert temperature from celsius -> fahrenhit -> celsius.
//Formula celsius -> fahrenhite (°F = (9/5) × °C + 32).
//Formula fahrenhite -> celsius (C = (F - 32)*(5/9)).
#include<iostream>
using namespace std;
int main()
{
    char choice;
    cout<<"1) Celsius -> Fahrenhite; \n 2) Fahrenhite -> Celsius; \n Enter your choice: ";
    cin>>choice;

   switch (choice)
   {
   case '1':
        int c,fahrenhite;
        cout<<"Enter the temperature in celsius: ";
        cin>>c;
        fahrenhite=(c*(9/5)+32);
        cout<<"Celsious -> Fahrenhite: _"<<fahrenhite;
        break;
    
    case '2':
        int f,celsius;
        cout<<"Enter the teperature in fahrenhite: ";
        cin>>f;
        celsius=((f-32)*(5/9));
        cout<<"Fahrenhite -> Celsius: _"<<celsius;
        break;
   
   default:
        cout<<"ERROR!";
        break;
   }
    
    
    return 0;
}
 