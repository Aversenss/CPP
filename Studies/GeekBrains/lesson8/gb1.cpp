#include <iostream>

using namespace std;

class DIV
{
private:
	string m_message;
public:
	DIV(string message = "") : m_message(message) {}
	const string& getMessage() const { return m_message; }
};

namespace my
{

template <typename T>
double div(T a, T b)
{
	if (b == 0)
		throw DIV(" / 0!");

	return a / b;
}

}


int main()
{
	try
	{
		double result = my::div(10, 2);
		cout << result << endl;
	}
	catch (const DIV& e)
	{
		cerr << e.getMessage() << endl;
	}

    return 0;
}
