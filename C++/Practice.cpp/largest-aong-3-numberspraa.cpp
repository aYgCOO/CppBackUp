//calculate largest among 3 number in c++.
#include<iostream>
using namespace std;
int main(){
	int num1 , num2 , num3 ;
	cout<<"Enter the num1: ";
	cout<<"Enter the num2: ";
	cout<<"Enter the num3: ";
	cin>>num1 , num2 , num3 ;
	
	if (num1>num3 && num2>num3){
		cout<<"num1 is greatest."<<endl;
	}
	else if (num1>num2 && num3>num2){
		cout<<"num2 is greatest."<<endl;
	}
	else{
		cout<<"num3 is greatest."<<endl;
	}
	
	return 0;
}
