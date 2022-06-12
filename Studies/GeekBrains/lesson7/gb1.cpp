#include "Date.hpp"


int main()
{
	_ptr<Date> today(new Date(10, 07, 2021));

	cout << "Day: " << today->getDay() << endl;
	cout << "Month: " << today->getMonth() << endl;
	cout << "Year: " << today->getYear() << endl;
	cout << "today: " << *today << endl;

	_ptr<Date> date;

	cout << "today is " << (today.isNull() ? "null\n" : "not null\n");
	cout << "date is " << (date.isNull() ? "null\n" : "not null\n");

	date = today;

	cout << "today is " << (today.isNull() ? "null\n" : "not null\n");
	cout << "date is " << (date.isNull() ? "null\n" : "not null\n");

	cout << "date: " << *date << endl;

	return 0;
}