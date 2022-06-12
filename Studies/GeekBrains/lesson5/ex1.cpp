#include <iostream>

using namespace std;

template <typename Scheme>
class Pair {
    private:
        Scheme num1;
        Scheme num2;
    public:    
        Pair(const Scheme& n1, const Scheme& n2): num1(n1), num2(n2) {}
        Scheme first() const { return num1; };
        Scheme second() const { return num2; };   
};

int main()
{
    Pair<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}
