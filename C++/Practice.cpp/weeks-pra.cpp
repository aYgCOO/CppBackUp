//Print week in c++.
#include<iostream>
using namespace std;
int main(){
	int week;
	cout<<"Enter a weekly number: ";
	cin>>week;
	
	if (week==1){
		cout<<"MONDAY"<<endl;
	}
	else if (week==2){
		cout<<"TUESDAY"<<endl;
	}
	else if (week==3){
		cout<<"WEDNESDAY"<<endl;
	}
	else if (week==4){
		cout<<"THURSDAY"<<endl;
	}
	else if (week==5){
		cout<<"FRIDAY"<<endl;
	}
	else if (week==6){
		cout<<"SATURDAY"<<endl;
	}
	else if (week==7){
		cout<<"SUNDAY"<<endl;
	}
	else{
		cout<<"Its your death anniversary"<<endl;
	}
	return 0;
}
