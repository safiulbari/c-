#include <iostream>
using namespace std;

int main(){
    char choice;
    float a,b;
    
    while(1){
    	cout << "Enter Operator: ";
    	cin >> choice;
    	cout << "Enter two Number: ";
    	cin >> a >> b;
    	switch(choice){
    	case '+':
    		cout << a+b;
    		break;
    	case '-':
    		cout << a-b;
    		break;
    	case '*':
    		cout << a*b;
    		break;
    	case '/':
    		cout << a/b;
    		break;
    	default:
    		cout << "you give wrong input" << endl;
    		break;
	}
    	cout << endl << "==============" << endl;	
	}
}
