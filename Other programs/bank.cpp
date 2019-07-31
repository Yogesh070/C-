#include <iostream>
using namespace std;

class Acc
{
	public:
	int acc_no, balance,dip, wit;
	char acc_name[50], acc_type[50];
		void form()
			{
				cout << "Enter your name: ";
				cin >> acc_name;
				cout << "Enter account number: ";
				cin >> acc_no;
				cout << "Enter your account type: ";
				cin >> acc_type;
				cout << "Enter your balance: ";
				cin >> balance;
		}
			void deposite(){
				cout << endl << "Enter the amount to deposite: ";
				cin >> dip;
				
				cout << "Your previous balance was " << balance << endl;
				cout << "Your new balance is " << balance+dip << endl;
				
					balance += dip;
			}
			void withdraw(){
				cout << endl << "Enter the amount you want to withdraw: ";
				cin >> wit;
				
					if (wit > balance)
						cout << "Insufficient amount!" << endl;
					else {
							cout << "Your previous balance was " << balance << endl;
							cout << "Your new balance is " << balance-wit << endl;
							balance -= wit;
						}
			}
			void disp(){
				cout << endl << "The account detail" << endl << "Name: " << acc_name << endl << "Acc_type: " << acc_type << endl;
				cout << "Acc-Num: " << acc_no << endl << "Balance: " << balance << endl;
			}
				
};

int main()
{
	Acc p1;
	int a=1;
	
		p1.form();

	
	while(a!=0){
		
			cout << endl << "What do you want to do now?" << endl << "1, deposite" << endl << "2, Withdraw" << endl;
			cout << "3, account details" << endl << "0, to exit" << endl;
			cout << "Enter a option: ";
			cin >> a;
			
	switch (a){
		case 1:
			p1.deposite();
			break;
		case 2:
			p1.withdraw();			
			break;
		case 3:
			p1.disp();
			break;
		case 0:
			cout << "bye!";
				break;
		default:
			cout << "Enter the given number please!";	
	}
	}
}







