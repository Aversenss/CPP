#include <iostream>

class ClassName {
    private:            // Closed data
        int x=4;
        int y=2;
    public:             // Opened data
        int getX(){ return x; };
        int getY(){ return y; };
    protected:          // Closed data, opened for sons of class
        int z;        
};

int main() {
    ClassName controller;
    std::cout << "x = " << controller.getX() << " y = " << controller.getY() << std::endl; 

    return 0;
}

