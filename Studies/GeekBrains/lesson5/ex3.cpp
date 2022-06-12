#include <iostream>

using namespace std;

template<typename T1, typename T2>
class Pair
{
    protected:
        T1 text;
        T2 data;
    public:
        Pair(const T1& arg1, const T2& arg2) : text(arg1), data(arg2)
        {};

        T1 first() const { return text; };
        T2 second() const { return data; };

};

template <typename T>
class StringValuePair : public Pair<std::string, T>
{
    public:
        StringValuePair(const string& text, const T& data) : Pair<string, T>(text, data)
        {};
};


int main()
{
    StringValuePair<int> svp("Amazing", 7);
    cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';
    return 0;
}
