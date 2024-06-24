#include <iostream>
#include <string>
using namespace std;

class Bank
{
private:
	string name;
	long long accnumber;
	char type[20];
	long long tot = 0;

public:
	void setvalue()
	{
		cout << "Enter name\n";
		cin.ignore(); // Ignore leftover newline from previous input
		getline(cin, name);

		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot;
	}

	void showdata()
	{
		cout << "Name: " << name << endl;
		cout << "Account No: " << accnumber << endl;
		cout << "Account type: " << type << endl;
		cout << "Balance: " << tot << endl;
	}

	void deposit()
	{
		long long amount;
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
		if (amount > 0)
		{
			tot += amount;
			cout << "Amount Deposited Successfully\n";
		}
		else
		{
			cout << "Invalid Deposit Amount\n";
		}
	}

	void showbal()
	{
		cout << "\nTotal balance is: " << tot << endl;
	}

	void withdrawl()
	{
		long long amount;
		cout << "Enter amount to withdraw\n";
		cin >> amount;
		if (amount > 0 && amount <= tot)
		{
			tot -= amount;
			cout << "Withdrawal Successful\n";
		}
		else
		{
			cout << "Invalid Withdrawal Amount or Insufficient Balance\n";
		}
		cout << "Available Balance is " << tot << endl;
	}
};

int main()
{
	Bank b;
	int choice;

	while (true)
	{
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			cout << "Exiting...\n";
			exit(0);
		default:
			cout << "\nInvalid choice\n";
		}
	}
	return 0;
}
