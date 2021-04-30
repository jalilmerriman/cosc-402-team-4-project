
#include <iostream> 
#include<string>
#include<iomanip>
using namespace std;

class donation
{
public:
	void print();
	void setAll(string, string, string, double, double, int);
	void resetPrice();
	void resetnumber();
	void resetemail();
	donation();
	donation(string, string,string,double, double, int);

private:

	string email;
	string Fname;
	string Lname;
	double amount;
	double telephone;
	int staketype;

};


void donation::setAll( string fn, string ln, string mail, double pr, double tel , int stk)
{
	if (pr <= 0)
	{
		cout << "invalid amount. please try again\n";
		cin >> pr;
	}
	

	email = mail;
	amount = pr;
	Fname = fn;
	Lname = ln;
	telephone = tel;
	staketype = stk;

}

void donation::resetPrice()
{
	double pr;
	cout << "	please input a new price: \n";
	cin >> pr;

	while (pr <= 0)
	{
		cout << "invalid. please try again\n";
		cin >> pr;
	}

	amount = pr;
}

void donation::resetnumber()
{

	cout << "	please input a new telephone number: \n";
	cin >> telephone;

	
}

void donation::resetemail()
{
	
	cout << "	please input a new email: \n";
	cin >> email;


}

void donation::print()
{
	cout << fixed << setprecision(2);
	cout << "	Firstname: " << Fname
		<< ;
	cout << endl << "	Lastname: " << Lname << endl;
	<< "	Amount:$ " << amount << endl;
	cout << "  email:  " << email << endl << "   telephone #:  " << telephone << endl;

}

donation::donation()
{
	email = " "
	Fname = " ";
	Lname = " ";
	amount = 0;
	telephone = 0000000000;
	staketype = 0; 
}

donation::donation(string fn, string ln, string mail, double pr, double tel, int stk)
{

	setAll(fn, ln, mail, pr, tel, stk);
}