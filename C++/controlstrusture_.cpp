#include<iostream>
using namespace std;
int main()
{
    //Seclection control structure; [if , else- ladder] 
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<18){
        cout<<"You can not watching ADULT(/) movies."<<endl;
    }
    else if(age==18){
        cout<<"I am not give you permission , Please watching at your own risk"<<endl;  
    }
    else{
        cout<<"OK , you are young its your choise , you can watching."<<endl;    
    }
    return 0;
}
