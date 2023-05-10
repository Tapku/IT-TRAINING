//Define a class to represent a bank account
#include<iostream>
using namespace std;
class Bank
{
	string name;
	int acc_no;
	string acc_type;
	int balance;
	int money;
public:
	void assign()
	{
		cout<<"Name : "<<endl;cin>>name;
		cout<<"Account No: "<<endl;cin>>acc_no;
		cout<<"Account type: "<<endl;cin>>acc_type;
		cout<<"Balance: "<<endl;cin>>balance;
	}
	void deposit()
	{
		cout<<"How much money would you like to deposit ?"<<endl;
		cin>>money;
		balance+=money;//addding new entry to old one..
		cout<<"Now after deposit balance = "<<balance<<endl;
	}
	void withdraw()
	{
		money=0;
		cout<<"How much you want to withdraw ?"<<endl;
		cin>>money;
		balance-=money;
		cout<<"Now after withdraw balance = "<<balance<<endl;
	}
	void display()
	{
		cout<<"Account holder: "<<name<<endl;
		cout<<"Total Remaining balance = "<<balance;
	}

};
main()
{
	Bank b1;
	b1.assign();
	b1.deposit();
	b1.withdraw();
	b1.display();
}

