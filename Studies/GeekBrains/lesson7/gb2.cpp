#include "Date.hpp"

const _ptr<Date>& compares_dates(const _ptr<Date>& a, const _ptr<Date>& b)
{
	if (a->getYear() > b->getYear())
		return a;
	else if (a->getYear() < b->getYear())
		return b;
	else
	{
		if (a->getMonth() > b->getMonth())
			return a;
		else if (a->getMonth() < b->getMonth())
			return b;
		else
		{
			if (a->getDay() > b->getDay())
				return a;
			else
				return b;
		}
	}
}

void swap_dates(_ptr<Date>& a, _ptr<Date>& b)
{
	_ptr<Date> temp(a);
	a = b;
	b = temp;
}

int main() {
    _ptr<Date> date1(new Date(05, 02, 2004));
	_ptr<Date> date2(new Date(10, 07, 2022));
	_ptr<Date> date3(new Date(24, 05, 1922));

	cout << *compares_dates(date1, date2) << endl;
	swap_dates(date2, date3);
	cout << *compares_dates(date1, date2) << endl;
    return 0;
}