//swiping two number

#include <iostream>
using namespace std;

int main (void){
	int num1, num2;
	cout << "Enter two number: ";
	cin >> num1 >> num2;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	
	cout << "After swap: \nNumber 1: "<< num1 << " Number 2: " << num2 << endl;
}
