#include <iostream>

class ClassName {
    private:
        int x;
        int y;
    public:
        ClassName(int _x, int _y): x(_x), y(_y) {}; // Declare constructor
        int getX() { return x; };
        int getY() { return y; };
        ~ClassName() { std::cout << "Deleting object..." << std::endl; }; // Destructor
};

int main() {
    ClassName *coord = new ClassName(2,3);
    std::cout << coord->getX() << " | " << coord->getY() << std::endl;
    delete coord;
    return 0;
}
