#include <iostream>
using namespace std;

int main(void){
	cout << "Enter Dividend: ";
	int dividend;
	cin >> dividend;
	cout << "Enter Divisor: ";
	int divisor;
	cin >> divisor;
	
	cout << "Quotient: " << dividend / divisor << endl;
	cout << "Remainder: " << dividend % divisor << endl;
}
