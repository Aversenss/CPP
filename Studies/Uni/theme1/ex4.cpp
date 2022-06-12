#include <iostream>

class ClassName {
    private:
        int x;
        int y;
    public:
        ClassName(int _x, int _y): x(_x), y(_y) {}; // Declare constructor
        ClassName(const ClassName &obj) {}; // Declare copy constructor
        int getX() { return x; };
        int getY() { return y; };
        ~ClassName() { std::cout << "Deleting object..." << std::endl; }; // Destructor
};

int main() {
    ClassName *coord = new ClassName(2,3);
    ClassName *coord_new = coord;   // Copy
    std::cout << coord->getX() << " | " << coord->getY() << std::endl;
    std::cout << coord_new->getX() << " | " << coord_new->getY() << std::endl;
    delete coord;
    delete coord_new;
    return 0;
}
