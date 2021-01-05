#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double debt = 0, itr, pay; 
	int year = 1;

	cout << "Enter initial loan: ";
	cin >> debt;
	cout << "Enter interest rate per year (%): ";
	cin >> itr;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	while(debt>0){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << debt;
		cout << setw(13) << left << debt*itr/100;
		debt += debt*itr/100;
		cout << setw(13) << left << debt;
		if(pay>debt){pay=debt;}
		cout << setw(13) << left << pay;
		cout << setw(13) << left << debt - pay;
		debt -= pay;
		cout << "\n";
		year++;
	}
		
	return 0;
}
