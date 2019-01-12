#include<iostream>
//problem: link with the main file
using namespace std;
int dur;

int interest_sav()
{
	//interest addition
	//for saving interest be 2% per annum
	cout<<"Your is a saving account and your interest rates are 2%per annum";
	cout<<"enter duration for the account";
	cin>>dur;
	if(dur>12)
	{
		amount=amount*0.2;
	}
	else 
	{	
		cout<<"your interest rate will be updated in an year";
	}
	return 0;
}

int interest_cur()
{
	//interest addition
	//for saving interest be 5% per annum
	cout<<"Your is a current account and your interest rates are 5% per annum";
	cout<<"enter duration for the account";
	cin>>dur;
	if(dur>12)
	{
		amount=amount*0.5;
	}
	else 
	{	
		cout<<"your interest rate will be updated in an year";
	}
	return 0;
}

