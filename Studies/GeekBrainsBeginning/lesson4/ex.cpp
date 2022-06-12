#include <iostream>

using namespace std;

void controller();


void first() {
	// 1
	
	cout << "Task 1: " << endl;
	int num1, num2;
	cout << "Enter num1" << endl;
	cin >> num1;
	cout << "Enter num2" << endl;
	cin >> num2;
	
	if( ((num1+num2) >= 10) && ((num1+num2) <= 20)   ) 
		cout << "true" << endl;
	else
		cout << "false" << endl;

	controller();
}

void second() {

	// 2

	const int a = 5;
	const int b = 5;

	if( (a == 10) && (b == 10)  )
		cout << "true" << endl;
	else if ( a + b == 10) 
		cout << "true" << endl;
		else 
			cout << "false" << endl;

	controller();	
	
}

void third() {
	// 3
	int i = 1;
	cout << "Your number is";
	while(i<51) {
		if (i % 2 != 0)
			cout << " " << i;
		i++;	
	}
	cout << endl;


	controller();		
}

void fourth() {
	// 4

	cout << "Task 4:" << endl;
	int num;
	cout << "Enter num" << endl;
	cin >> num;

	int i, isLite;
	for(i=2;i<num-1;i++) {
		if (num % i  == 0)
			isLite = 1;
	}
	if(isLite == 1)
		cout << "Number is not Simple" << endl;	// РќРµ РїСЂРѕСЃС‚РѕРµ
	else
		cout << "Number is Simple" << endl;	 // РџСЂРѕСЃС‚РѕРµ

	controller();

}

void funfth() {
	// 5

	int year;
	cout << "Input year" << endl;
	cin >> year;

	if( (year < 1) || (year > 3000)) {
		cout << "Wrong year" << endl;
		controller();
	}

	int i;
	bool isTrue = false;
	for(i=0; i<year; i+=4) {
		if (year % 4 == 0)
			if( year % 100 != 0 || year % 400 == 0) {
				isTrue = true;
				break;	
			}
	}

	if(isTrue == false)
		cout << "Year is good" << endl;	// РќРµ РІРёСЃРѕРєРѕСЃРЅС‹Р№
	else
		cout << "Year is not good" << endl;		// Р’РёСЃРѕРєРѕСЃРЅС‹Р№
		
	controller();	
}

void exit() {
	cout << "Finish....";
	exit(1);
}

void controller() {
	// controller

	cout << "Choose the task (1-5) or 6 to exit" << endl;

	int num;
	cin >> num;
	if( (num < 1) || (num > 6)) 
		cout << "Wrong number" << endl;
	else {
		switch(num) {
			case 1:
				first();
				break;
			case 2:
				second();
				break;
			case 3:
				third();
				break;
			case 4:
				fourth();
				break;
			case 5:
				funfth();
				break;
			case 6:
				exit();
				break;					
		}
	}
}

int main() {
	controller();
	return 0;
}
