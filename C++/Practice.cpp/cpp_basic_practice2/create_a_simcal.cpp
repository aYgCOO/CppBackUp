//Create a simple calculator using function in c++.
#include<iostream>
using namespace std;
int calculator(int value1, int value2){
    int choice;
    cout<<" 1)Addition \n 2)Substruction \n 3)Multiplication \n 4)Divition \nEnter your choice: ";
    cin>>choice;
    int cal;
    
    if (choice==1)
    {
        cal=value1+value2;
        
    }
    else if (choice==2)
    {
        cal=value1-value2;
    }
    else if(choice==3){
        
        cal=value1*value2;
    }
    else if(choice==4){

        cal=value1/value2;
    }
    
    else{
        cout<<"Please enter a valid choice: ";
    }
    return cal;
    
}
int main()
{
    int value1;
    cout<<"Enter the first value: ";
    cin>>value1;

    int value2;
    cout<<"Enter the second value: ";
    cin>>value2;

    int calculas=calculator(value1,value2);
    cout<<"The caculation result is,"<<calculas; 

    return 0;
}


