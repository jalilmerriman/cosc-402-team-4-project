#pragma once
#pragma once
#include <iostream> 
#include<string>
#include<iomanip>
using namespace std;

class donation
{
public:
	void print();
	void setAll(string, string, double);
	void resetPrice();
	donation();
	donation(string, string, double);

private:

	string Fname;
	string Lname;
	double amount;


};


void donation::setALL(string fn, string ln, double pr,)
{
	if (pr <= 0)
	{
		cout << "invalid amount. please try again\n";
		cin >> pr;
	}



	double amount = pr;
	string Fname = fn;
	string Lname = ln;

}

void donation::resetPrice()
{
	double pr;
	cout << "	please input a new price: ";
	cin >> pr;

	while (pr <= 0)
	{
		cout << "invalid. please try again\n";
		cin >> pr;
	}

	amount = pr;
}

void donation::print()
{
	cout << fixed << setprecision(2);
	cout << "	Firstname: " << Fname<< ;
	cout << endl << "	Lastname: " << Lname << endl;
	<< "	Amount:$ " << amount << endl;

}

donation::donation()
{

	Fname = " ";
	Lname = " ";
	amount = 0;

}

donation::donation(string fn, string ln, double pr)
{

	setAll(fn, ln, pr);
}