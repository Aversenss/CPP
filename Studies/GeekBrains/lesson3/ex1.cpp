#include <iostream>
#include <math.h>

using namespace std;

class Figure  {
    protected: 
        double param1;
        double param2;
        double param3;
        double _square;
        const double pi = 3.14;
    public:
        virtual void area() = 0;
        void square() { cout << "Square is: " << _square << endl;}
        Figure(double p1): param1(p1) {};
        Figure(double p1, double p2): param1(p1), param2(p2) {};

        virtual ~Figure(){};
};

class Parallelogram: public Figure {
    public:
        Parallelogram(double p1):Figure(p1) {};
        Parallelogram(double p1, double p2):Figure(p1,p2) {};
};

class Rhombus: public Parallelogram {
    public:
        Rhombus(double p1, double p2):Parallelogram(p1,p2) {};

        void area(void) {
            _square = param1*param2;
        }

};


class Rectangle: public Parallelogram {
    public:
        Rectangle(double p1, double p2):Parallelogram(p1,p2) {};

        void area(void) {
            _square = (param1*param2)/2;
        }
};

class Square: public Parallelogram {
    public:
        Square(double p1):Parallelogram(p1) {};

        void area(void) {
            _square = pow(param1,2);
        }
};

class Circle: public Figure {
    public:
        Circle(double p1):Figure(p1) {};

        void area(void) {
            _square = pow(param1,2)*pi;
        }
};


int main(const int argc, char* argv[]) {
    Figure* forms[] = {
        new Circle(3),                          // Круг
        new Square(2),                          // Квадрат
        new Rectangle(4,5),                     // Треугольник
        new Rhombus(2,4)                        // Ромб
    };  

    for(Figure* output:forms) {
        output->area();
        output->square();
        delete output;
    }

    return 0;
}
