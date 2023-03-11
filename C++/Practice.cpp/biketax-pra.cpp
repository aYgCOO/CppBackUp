#include<iostream>
using namespace std;
int main(){
	int rs;
	cout<<"Enter the cost price of your bike: ";
	cin>>rs;
	
	if (rs>80000){
		cout<<"Tax6%"<<endl;
	}
	else if (rs>70000){
		cout<<"Tax5%"<<endl;
	}
	else if (rs>60000){
		cout<<"Tax4%"<<endl;
	}
	else if (rs>50000){
		cout<<"Tax3%"<<endl;
	}
	else{
		cout<<"Moth***ker go back your home."<<endl;
	}
	return 0;
}
