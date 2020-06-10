#include <iostream>		//header file to display output
using namespace std;	//cout define the std namespace

int main(void){
	//c++ output
	//include <iostream>
	//using namespace std;
	//in c++ we use - cout<<""; - for writing output
	
	//string output
	cout << "Hello to the world of c++" << endl << endl; // endl add a new line after output
	
	
	//nubmer and character output
	int num1 = 70;
	double num2 = 256.783;
	char ch = 'A';
	
	cout  << num1 << endl;
	cout << num2 << endl;
	cout << "charater: " << ch << endl;
	
	
	//taking input in c++
	int num;
	cin >> num;
	cout << num <<endl;
	
	
	//taking multiple input
	cout << "Enter two number in a row:";
	cin >> num1 >> num2;
	
	cout << "Number 1: " << num1 << endl;
	cout << "Number 2: " << num2 << endl;
	
	return 0;
}
