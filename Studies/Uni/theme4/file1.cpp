#include <iostream>

using namespace std;

class A {
    protected:
        int x;
        int y;
    public:
        A(int _x, int _y): x(_x), y(_y) {};
        int getX() { return x; };
        int getY() { return y; }; 
        int sum() { return x+y; };   
        ~A(){};
};

class B: public A {
    public:
        B(int _x, int _y):A(_x,_y){};
        int min() { return x-y; };
        ~B(){};
};


int main() {
    B coord(2,4);
    
    cout << "x = " << coord.getX() << " y = " << coord.getY() << endl;
    cout << "x + y = " << coord.sum() << endl;
    cout << "x - y = " << coord.min() << endl;

    return 0;
}
