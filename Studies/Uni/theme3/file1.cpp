
#include <iostream>
using namespace std;

class Complex {
   private:
        double re, im;
   public:
        Complex( double r, double i ) : re(r), im(i) {}
        Complex operator+( Complex &other );
        Complex operator-( Complex &other );
        void Display( ) {   cout << re << ", " << im << endl; }
};

Complex Complex::operator+( Complex &other ) {
   return Complex( re + other.re, im + other.im );
}

Complex Complex::operator-( Complex &other ) {
   return Complex( re - other.re, im - other.im );
}

int main() {
   Complex a = Complex( 1.2, 3.4 );
   Complex b = Complex( 5.6, 7.8 );
   Complex c = Complex( 0.0, 0.0 );
   Complex d = Complex( 0.0, 0.0 );

   c = a + b;
   d = a - b;
   c.Display();
   d.Display();
}
