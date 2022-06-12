#include <iostream>

using namespace std;

class Car {
    protected:
        string name;
        string model;
    public:
        virtual void getInfo() { cout << "Name: " << name << " Model: " << model << endl; };
        Car(string n, string m): name(n), model(m) {}; 
};

class PassengerCar: virtual public Car {
    public:
        PassengerCar(string n, string m):Car(n, m) {};
};

class Bus: virtual public Car {
    public:
        Bus(string n, string m):Car(n, m) {};
};

class Minivan: public PassengerCar, public Bus {
    public:
        Minivan(string n, string m):Bus(n, m),PassengerCar(n,m),Car(n, m) {};
};


int main() {
    Car car("Car","ModelName");
    PassengerCar psg("PSG","ModelName");
    Bus bus("Bus", "ModelName");
    Minivan van("VanName","ModelName");

    car.getInfo();
    psg.getInfo();
    bus.getInfo();
    van.getInfo();

    return 0;
}
