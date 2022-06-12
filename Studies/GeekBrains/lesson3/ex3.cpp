#include <iostream>

using namespace std;

class Fraction {
    protected:
        double up;
        double down;
        int flag;
    public:
        Fraction(int u, int d): up(u), down(d) {};
        Fraction(int f): flag(f) {};
        friend Fraction operator+ (const Fraction &nd1, const Fraction &n2);
        friend Fraction operator- (const Fraction &n1, const Fraction &n2);
        friend Fraction operator- (const Fraction &n1);                                 // унарный
        friend Fraction operator* (const Fraction &n1, const Fraction &n2);
        friend Fraction operator/ (const Fraction &n1, const Fraction &n2);    
        friend Fraction operator== (const Fraction &n1, const Fraction &n2);
        friend Fraction operator<= (const Fraction &n1, const Fraction &n2);
        void getNumber() { cout << up << "/" << down << endl;};
        int getFlag(){return flag;};
};

Fraction operator+(const Fraction &n1, const Fraction &n2) {
    return Fraction(n1.up+n2.up, n1.down+n2.up); 
}

Fraction operator-(const Fraction &n1, const Fraction &n2) {
    return Fraction(n1.up-n2.up, n1.down-n2.up); 
}

Fraction operator-(const Fraction &n1) {
    return Fraction(-n1.up, n1.down); 
}

Fraction operator*(const Fraction &n1, const Fraction &n2) {
    return Fraction(n1.up*n2.up, n1.down*n2.up); 
}

Fraction operator/(const Fraction &n1, const Fraction &n2) {
    return Fraction(n1.up/n2.up, n1.down/n2.up); 
}

Fraction operator<=(const Fraction &n1, const Fraction &n2) {

    double num = n1.up / n1.down;
    double num2 = n2.up / n2.down;

    if (num < num2 )
        return Fraction(1); 
    if (num > num2) 
        return Fraction(0);
    return Fraction(2);    
  
}

Fraction operator==(const Fraction &n1, const Fraction &n2) {

    double num = n1.up / n1.down;
    double num2 = n2.up / n2.down;

    if (num == num2 )
        return Fraction(1); 
    else
        return Fraction(0);
  
}



int main() {
    Fraction first(3,6);
    Fraction second(3,3);
    Fraction sum = first + second;
    sum.getNumber();
    Fraction min = first - second;
    min.getNumber();
    Fraction multi = first * second;
    multi.getNumber();
    Fraction division = first / second;
    division.getNumber();

    Fraction bigger = first <= second;
    Fraction equally = first == second;

    switch (bigger.getFlag()) {
        case(0):
            cout << "Number 1 is bigger than Number 2" << endl;
            break;
        case(1):
            cout << "Number 2 is bigger than Number 1" << endl;
            break;
        case(2):
            cout << "Number 1 is equally Number 2" << endl;
            break;        
    }

    switch (equally.getFlag()) {
        case(0):
            cout << "Number 1 is not equally Number 2" << endl;
            break;
        case(1):
            cout << "Number 1 is equally Number 2" << endl;
            break;     
    }

    Fraction minus = -first;
    minus.getNumber();

    return 0;
}
