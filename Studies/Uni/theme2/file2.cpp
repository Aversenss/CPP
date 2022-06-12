#include <iostream>

class ClassName {
    private:
        int x;
        int y;
        static int count;
    public:
        ClassName(int _x, int _y): x(_x), y(_y) { count++; };   // num of objects
        ~ClassName(){};
        int getCount() { return count; };
};

int ClassName::count = 0;

int main() {
    ClassName *coord = new ClassName(2,3);
    ClassName *coord_2 = new ClassName(4,5);
    ClassName *coord_3 = new ClassName(6,7);

    std::cout << coord->getCount() << std::endl;

    delete coord;
    delete coord_2;
    delete coord_3;

    return 0;
}
