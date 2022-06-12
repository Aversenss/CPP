#include <iostream>

using namespace std;

class Fruit {
	protected:
		string name;
		string color;
	public:
		Fruit(string c, string n): color(c), name(n) {};
		string getName() { return name; };
		string getColor() { return color; };
};

class Apple: public Fruit {
	public:
		Apple(string c):Fruit(c, "apple") {};
		Apple(string c, string n):Fruit(c, n) {};
};

class Banana: public Fruit {
	public:
		Banana():Fruit("yellow","banana") {};
};

class GrannySmith: public Apple {
	public:
		GrannySmith():Apple("green", "Granny Smith apple") {};
};

int main() {
	Apple a("red");
	Banana b;
	GrannySmith c;
	cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	cout << "My " << c.getName() << " is " << c.getColor() << ".\n";
	return 0;
}
