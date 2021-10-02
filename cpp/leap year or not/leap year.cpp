#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Enter the year";
	cin>>year;
	
	if((year%4==0)&&(year%100!=0)||(year%400==0)){
		cout<<year <<" IS leap Year";
	}else{
		cout<<year <<" Not A leap year";
	}
	return 0 ;
}
