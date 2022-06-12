#include <iostream>

using namespace std;

template <typename Scheme, typename Scheme2>
class Pair {
    private:
        Scheme num1;
        Scheme2 num2;
    public:    
        Pair(const Scheme& n1, const Scheme2& n2): num1(n1), num2(n2) {}
        Scheme first() const { return num1; };
        Scheme2 second() const { return num2; };   
};

int main()
{
    Pair<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double, int> p2(3.4, 5);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}
