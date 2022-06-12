#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

class Power {
    private:
        double x=2;
        double y=4;
    public:
        void set(int var, double value);
        void calculate();
};

void Power::set(int var, double value) {
    switch(var) {
        case(1):
            x = value;
            cout << "x is: " << x << endl;
            break;
        case(2):
            y = value;
            cout << "y is: " << y << endl;
            break;
        default:
            cout << "Wrong var!" << endl;
            exit(2);
            break;        
    }
}

void Power::calculate() {
    cout << "x^y: " << pow(x,y) << endl;
}

int main(const int argc, char* argv[]) {
    Power object;
    object.calculate();
    object.set(1,2);
    object.set(2,3);
    object.calculate();
    return 0;
}
