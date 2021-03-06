#include <cassert>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class ArrayInt
{
private:
    int m_length;
    int *m_data;

    void swap(int& a, int& b)
    {
    	int x = a;
    	a = b;
    	b = x;
    }

    /*
     * Сортировка методом Хоара
     */
    void m_sort(int first, int last)
    {
    	int i = first;
    	int j = last;

    	int x = m_data[(first + last) / 2];

    	do
    	{
    		while (m_data[i] < x) i++;
    		while (m_data[j] > x) j--;

    		if (i <= j)
    		{
    			swap(m_data[i], m_data[j]);
    			i++;
    			j--;
    		}
    	} while (i <= j);

    	if (i < last) m_sort(i, last);
    	if (first < j) m_sort(first, j);
    }
public:
    ArrayInt(): m_length(0), m_data(nullptr)
    { }

    ArrayInt(int length): m_length(length)
    {
        assert(length >= 0);

        if (length > 0)
            m_data = new int[length];
        else
            m_data = nullptr;
    }

    void erase()
	{
		delete[] m_data;

		m_data = nullptr;
		m_length = 0;
	}

	int getLength()
	{
		return m_length;
	}

	void resize(int newLength)
	{
		if (newLength == m_length)
			return;

		if (newLength <= 0)
		{
			erase();
			return;
		}

		int *data = new int[newLength];

		if (m_length > 0)
		{
			int elementsToCopy = (newLength > m_length) ? m_length : newLength;

			for (int index=0; index < elementsToCopy ; ++index)
				data[index] = m_data[index];
		}

		delete[] m_data;

		m_data = data;
		m_length = newLength;
	}

	void insertBefore(int value, int index)
	{
		assert(index >= 0 && index <= m_length);

		int *data = new int[m_length+1];

		for (int before=0; before < index; ++before)
			data[before] = m_data[before];

		data [index] = value;

		for (int after=index; after < m_length; ++after)
			data[after+1] = m_data[after];

		delete[] m_data;
		m_data = data;
		++m_length;
	}

	void push_back(int value)
	{
		insertBefore(value, m_length);
	}

	void pop_back()
	{
		if (m_length == 0)
			return;

		resize(m_length - 1);
	}

	void pop_front()
	{
		if (m_length == 0)
			return;

		if (m_length - 1 == 0)
		{
			erase();
			return;
		}

		int *data = new int[m_length - 1];

		for (int index=1; index < m_length ; ++index)
			data[index - 1] = m_data[index];

		delete[] m_data;
		m_data = data;
		--m_length;
	}

	void sort()
	{
		m_sort(0, m_length - 1);
	}

    ~ArrayInt()
    {
        delete[] m_data;
    }

    friend ostream& operator<<(ostream&, ArrayInt&);

    int& operator[](int index)
	{
		assert(index >= 0 && index < m_length);

		return m_data[index];
	}
};

ostream& operator<<(ostream& s, ArrayInt& f)
{
	int length = f.getLength();

	for (int i = 0; i < length; ++i)
		s << f[i] << (((length == 1) || (length - 1 == i)) ? "" : ", ");

	return s;
};


int main() {
    ArrayInt array;

	array.push_back(2);
	array.push_back(1);
	array.push_back(3);
	array.push_back(4);
	array.push_back(2);
    array.push_back(6);
    array.push_back(5);
    array.push_back(4);
    array.push_back(9);
    array.push_back(10);
    array.push_back(25);

	cout << "Massive " << array << endl;

	array.sort();

	cout << "Sorted massive: " << array << endl;

	array.pop_front();
	array.pop_front();
    array.pop_front();
    array.pop_front();

	cout << "Minus 4 first elements (Front) " << array << endl;

	array.pop_back();
	array.pop_back();

	cout << "Minus 2 first elements (Back) " << array << endl;

    vector<int> v = {4,5,2,1,7,4,4,4,4,3,2,3,3,4,7};
	set<int> s(v.begin(), v.end());
	cout << s.size() << " uniq. | Max: " << v.size() << endl;
}
