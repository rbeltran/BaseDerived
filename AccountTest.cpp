#include <cmath>
#include <iostream>
using namespace std;

class Account {
	public:
		double initial_balance;
		double interest_rate;
		double interest_duration;

		double new_balance( void ) {
			double new_balance = initial_balance * pow( 1 + interest_rate / 100, interest_duration );
			return new_balance;
		}
};

class Checking : public Account {
	public:
		Checking() {
			interest_rate = 3;
		}
};

int main() {
	
	Checking cAccount;

	cout << "What is your initial balance?" << endl;
	cin >> cAccount.initial_balance;

	cout << "How many days are you collecting interest?" << endl;
	cin >> cAccount.interest_duration;

	double balance = cAccount.new_balance();
	cout << "Your new balance after" << cAccount.interest_duration << " days will be "<< balance << " dollars.\n" ;
}
